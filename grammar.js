module.exports = grammar({
    name: 'mustard',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    externals: $ => [
        $._template_chars
    ],

    supertypes: $ => [
        $.value_literal
    ],

    precedences: $ => [
        [
            'member',
            'call',
            $.update_expression,
            'unary_void',
            'binary_exp',
            'binary_times',
            'binary_plus',
            'binary_shift',
            'binary_compare',
            'binary_relation',
            'binary_equality',
            'bitwise_and',
            'bitwise_xor',
            'bitwise_or',
            'logical_and',
            'logical_or',
            'ternary',
            $.sequence_expression,
            $.arrow_function
        ],
        [
            $.array, $.arrayComp
        ],
        [
            $.call_expression,
            $.binary_expression,
            $.value_literal,
            $.ident
        ]
        // ['assign', $.primary_expression],
        // ['member', 'new', 'call', $.expression],
        // ['declaration', 'literal'],
        // [$.primary_expression, $.statement_block, 'object'],
        // [$.import_statement, $.import],
        // [$.export_statement, $.primary_expression],
    ],

    rules: {
        document: $ => seq($.statement, repeat($.statement)),

        statement: $ => seq(choice(
            $.expression,
            $.declaration_statement,
        ), optional(";")),

        declaration_statement: $ => choice(
            $.import_declaration,
            $.type_declaration,
            $.rule_declaration,
            $.let_declaration,
            $.let_element_declaration
        ),

        import_declaration: $ => seq(
            field("direction", choice("import", "export")),
            field("names", commaSep($.ident_word)), "from", field("ref", $.string)
        ),

        type_declaration: $ => seq(
            optional(field("export", "export")),
            "type", field("name", $.ident), "=",
            field("definition", pipeSep1(choice($.value_literal, $.ident)))
        ),

        rule_declaration: $ => seq(
            optional(field("export", "export")),
            "rule",
            field("ident", $.ident),
            "=",
            field("type", $.key_specification_expression)
        ),

        let_element_declaration: $ => prec(2, seq(
            // TODO: do you need to make this a field?
            optional(field("export", "export")),
            field("element", $.ident_word),
            field("ident", $.ident_word),
            optional(seq(
                "=",
                field("value", $.expression)
            ))
        )),

        let_declaration: $ => prec(3, seq(
            optional(field("export", "export")),
            "let",
            field("ident", $.ident),
            optional(seq(
                "=",
                field("value", $.expression)
            ))
        )),

        expression: $ => choice(
            $.binary_expression,
            $.call_expression,
            $.value_literal,
            $.ident,
        ),

        value_literal: $ => choice(
            $.tuple,
            $.object,
            $.array,
            $.arrayComp,
            $.number,
            $.string,
            $.template_string,
            $.true,
            $.false,
            $.null,
        ),

        tuple: $ => seq("(", commaSep($.expression), ")"),

        call_expression: $ => prec(19, seq(
            $.ident, $.tuple
        )),

        object: $ => seq(
            "{", commaSep(choice($.pairComp, $.pair, $.spread)), "}"
        ),

        pairComp: $ => seq(
            "[", $.key, "]",
            ":",
            field("value", $.expression),
            "for",
            field("keyAs", $.ident_word),
            optional(seq(",", field("valueAs", $.ident_word))),
            "in", field("in", choice($.ident, $.value_literal))
        ),

        arrayComp: $ => seq(
            "[",
            field("value", $.expression),
            "for",
            field("valueAs", $.ident_word),
            "in",
            field("in", choice($.expression)),
            "]"
        ),

        spread: $ => prec(1, seq(
            "...", choice("*", $.expression, $.ident)
        )),

        key: $ => seq(
            optional(field("prefix", choice("++", "--", "+", "-"))),
            field("name", dotSep1(choice($.string, $.ident))),
            optional(field("postfix", choice("!", "?")))
        ),

        pair: $ => seq(
            $.key,
            optional(seq(
                "(",
                $.key_specification_expression,
                ")"
            )),
            optional(seq(
                ":",
                field("value", $.value_literal)
            ))
        ),

        ident_word: $ => seq(/[a-zA-Z_][a-zA-Z0-9_]*/),

        ident: $ => dotSep1($.ident_word),

        comparison_operator: $ => choice(
            "<=",
            ">=",
            "<",
            ">",
            "!=",
            "==",
            "in",
            "contains"
        ),

        key_specification_expression: $ => seq(
            field("type", $.ident),
            optional(ruleSep1(
                seq($.comparison_operator, $.value_literal), choice("and", "or")
            )),
            optional(seq("else", field("rescue", $.value_literal)))
        ),

        array: $ => seq(
            "[", commaSep(
                choice(
                    $.expression,
                    $.spread)
            ), "]"
        ),

        string: $ => choice(
            seq('"', '"'),
            seq('"', $.string_content, '"')
        ),

        string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"]+/)),
            $.escape_sequence
        )),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            /(\"|\\|\/|b|f|n|r|t|u)/
        )),

        number: $ => {
            const hex_literal = seq(
                choice('0x', '0X'),
                /[\da-fA-F]+/
            )

            const decimal_digits = /\d+/
            const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
            const exponent_part = seq(choice('e', 'E'), signed_integer)

            const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

            const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)

            const decimal_integer_literal = seq(
                optional(choice('-', '+')),
                choice(
                    '0',
                    seq(/[1-9]/, optional(decimal_digits))
                )
            )

            const decimal_literal = choice(
                seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
                seq('.', decimal_digits, optional(exponent_part)),
                seq(decimal_integer_literal, optional(exponent_part))
            )

            return token(choice(
                hex_literal,
                decimal_literal,
                binary_literal,
                octal_literal
            ))
        },

        true: $ => "true",

        false: $ => "false",

        null: $ => "null",

        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

        // expressions
        binary_expression: $ => choice(
            ...[
                ['&&', 'logical_and'],
                ['||', 'logical_or'],
                ['>>', 'binary_shift'],
                ['>>>', 'binary_shift'],
                ['<<', 'binary_shift'],
                ['&', 'bitwise_and'],
                ['^', 'bitwise_xor'],
                ['|', 'bitwise_or'],
                ['+', 'binary_plus'],
                ['-', 'binary_plus'],
                ['*', 'binary_times'],
                ['/', 'binary_times'],
                ['%', 'binary_times'],
                ['**', 'binary_exp'],
                ['<', 'binary_relation'],
                ['<=', 'binary_relation'],
                ['==', 'binary_equality'],
                ['!=', 'binary_equality'],
                ['>=', 'binary_relation'],
                ['>', 'binary_relation'],
                ['??', 'ternary'],
                ['is', 'binary_relation'],
                ['in', 'binary_relation'],
                ['contains', 'binary_relation'],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $.expression),
                    field('operator', operator),
                    field('right', $.expression)
                ))
            )
        ),

        update_expression: $ => prec.left(choice(
            seq(
                field('argument', $.expression),
                field('operator', choice('++', '--'))
            ),
            seq(
                field('operator', choice('++', '--')),
                field('argument', $.expression)
            ),
        )),

        sequence_expression: $ => seq(
            field('left', $.expression),
            ',',
            field('right', choice($.sequence_expression, $.expression))
        ),

        arrow_function: $ => seq(
            optional('async'),
            field('parameters', $.formal_parameters),
            '=>',
            field('body', choice(
                $.expression,
                seq("{", $.document, "}")
            ))
        ),

        formal_parameters: $ => seq(
            '(',
            optional(seq(
                commaSep1(seq(
                    $.ident_word,
                    optional(seq("(", $.key_specification_expression, ")"))
                )),
                optional(',')
            )),
            ')'
        ),

        template_string: $ => seq(
            '`',
            repeat(choice(
                $._template_chars,
                $.escape_sequence,
                $.template_substitution
            )),
            '`'
        ),

        template_substitution: $ => seq(
            '${',
            $.expression,
            '}'
        ),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
              /[^xu0-7]/,
              /[0-7]{1,3}/,
              /x[0-9a-fA-F]{2}/,
              /u[0-9a-fA-F]{4}/,
              /u{[0-9a-fA-F]+}/
            )
          )),
    }
});

function dotSep1(rule) {
    return prec.left(seq(rule, repeat(seq(".", rule))))
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(",", rule)))
}

function commaSep(rule) {
    return optional(commaSep1(rule))
}

function pipeSep1(rule) {
    return seq(rule, repeat(seq("|", rule)))
}

function ruleSep1(rule, sep) {
    return seq(rule, repeat(seq(sep, rule)))
}