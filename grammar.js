module.exports = grammar({
    name: 'mustard',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    supertypes: $ => [
        $._value
    ],

    rules: {
        document: $ => repeat($.statement),

        statement: $ => seq(choice(
            $._value,
            $.expression,
            $.ruledecl,
            $.letdecl,
            $.importdecl,
            $.typedef,
        ), optional(";")),

        _value: $ => choice(
            $.funccall,
            $.object,
            $.array,
            $.number,
            $.string,
            $.true,
            $.false,
            $.null,
        ),

        funccall: $ => seq(
            $.ident, "(", commaSep($._value), ")"
        ),

        object: $ => seq(
            "{", commaSep(choice($.pairComp, $.pair, $.spreadStar, $.spread)), "}"
        ),

        expression: $ => seq(
            choice($.ident, $._value)
        ),

        pairComp: $ => seq(
            "[", $.key, "]",
            ":", 
            field("value", $.expression),
            "for", 
            field("keyAs", $.ident),
            optional(seq(",", field("valueAs", $.ident))),
            "in", field("in", choice($.ident, $._value))
        ),

        arrayComp: $ => seq(
            field("value", $.expression),
            "for",
            field("valueAs", $.ident),
            "in", field("in", choice($.ident, $._value))
        ),

        spreadStar: $ => seq(
            "...*"
        ),

        spread: $ => seq(
            "...", choice($._value, $.ident)
        ),

        key: $ => seq(
            optional(field("prefix", choice("++", "--", "+", "-"))),
            field("name", dotSep1(choice($.string, $.number, $.ident))),
            optional(field("postfix", choice("!", "?")))
        ),

        pair: $ => seq(
            $.key,
            optional(seq(
                "(",
                $.keytype,
                ")"
            )),
            optional(seq(
                ":",
                field("value", $._value)
            ))
        ),

        ident: $ => seq(/[a-zA-Z_][a-zA-Z0-9_]*/),

        comparisonOperator: $ => choice(
            "<", ">"
        ),

        keytype: $ => seq(
            field("type", $.ident),
            optional(seq($.comparisonOperator, $._value)),
            optional(seq("else", field("rescue", $._value)))
        ),

        array: $ => seq(
            "[", commaSep(choice($._value, $.arrayComp, $.spreadStar)), "]"
        ),

        string: $ => choice(
            seq('"', '"'),
            seq('"', $.string_content, '"')
        ),

        string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"\n]+/)),
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

        ruledecl: $ => seq(
            optional(field("export", "export")),
            "rule", field("ident", $.ident), "=", field("type", $.keytype)
        ),

        letdecl: $ => seq(
            optional(field("export", "export")),
            "let", field("ident", $.ident), optional(seq("=", field("value", $._value)))
        ),

        importdecl: $ => seq(
            field("direction", choice("import", "export")),
            field("names", commaSep($.ident)), "from", field("ref", $.string)
        ),

        typedef: $ => seq(
            optional(field("export", "export")),
            "type", field("name", $.ident), "=",
            field("definition", pipeSep1($._value))
        )
    }
});

function dotSep1(rule) {
    return seq(rule, repeat(seq(".", rule)))
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