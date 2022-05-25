#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_COLON = 9,
  anon_sym_for = 10,
  anon_sym_in = 11,
  anon_sym_DOT_DOT_DOT_STAR = 12,
  anon_sym_DOT_DOT_DOT = 13,
  anon_sym_PLUS_PLUS = 14,
  anon_sym_DASH_DASH = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_DOT = 18,
  anon_sym_BANG = 19,
  anon_sym_QMARK = 20,
  aux_sym_ident_token1 = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_else = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_string_content_token1 = 26,
  sym_escape_sequence = 27,
  sym_number = 28,
  sym_true = 29,
  sym_false = 30,
  sym_null = 31,
  sym_comment = 32,
  anon_sym_export = 33,
  anon_sym_rule = 34,
  anon_sym_EQ = 35,
  anon_sym_let = 36,
  anon_sym_import = 37,
  anon_sym_from = 38,
  anon_sym_type = 39,
  anon_sym_PIPE = 40,
  sym_document = 41,
  sym_statement = 42,
  sym__value = 43,
  sym_funccall = 44,
  sym_object = 45,
  sym_expr = 46,
  sym_pairComp = 47,
  sym_arrayComp = 48,
  sym_spreadStar = 49,
  sym_spread = 50,
  sym_key = 51,
  sym_pair = 52,
  sym_ident = 53,
  sym_comparisonOperator = 54,
  sym_keytype = 55,
  sym_array = 56,
  sym_string = 57,
  sym_string_content = 58,
  sym_ruledecl = 59,
  sym_letdecl = 60,
  sym_importdecl = 61,
  sym_typedef = 62,
  aux_sym_document_repeat1 = 63,
  aux_sym_funccall_repeat1 = 64,
  aux_sym_object_repeat1 = 65,
  aux_sym_key_repeat1 = 66,
  aux_sym_array_repeat1 = 67,
  aux_sym_string_content_repeat1 = 68,
  aux_sym_importdecl_repeat1 = 69,
  aux_sym_typedef_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT_DOT_STAR] = "...*",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [aux_sym_ident_token1] = "ident_token1",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_else] = "else",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_export] = "export",
  [anon_sym_rule] = "rule",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
  [sym_document] = "document",
  [sym_statement] = "statement",
  [sym__value] = "_value",
  [sym_funccall] = "funccall",
  [sym_object] = "object",
  [sym_expr] = "expr",
  [sym_pairComp] = "pairComp",
  [sym_arrayComp] = "arrayComp",
  [sym_spreadStar] = "spreadStar",
  [sym_spread] = "spread",
  [sym_key] = "key",
  [sym_pair] = "pair",
  [sym_ident] = "ident",
  [sym_comparisonOperator] = "comparisonOperator",
  [sym_keytype] = "keytype",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_ruledecl] = "ruledecl",
  [sym_letdecl] = "letdecl",
  [sym_importdecl] = "importdecl",
  [sym_typedef] = "typedef",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_funccall_repeat1] = "funccall_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_importdecl_repeat1] = "importdecl_repeat1",
  [aux_sym_typedef_repeat1] = "typedef_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT_DOT_STAR] = anon_sym_DOT_DOT_DOT_STAR,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_ident_token1] = aux_sym_ident_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_document] = sym_document,
  [sym_statement] = sym_statement,
  [sym__value] = sym__value,
  [sym_funccall] = sym_funccall,
  [sym_object] = sym_object,
  [sym_expr] = sym_expr,
  [sym_pairComp] = sym_pairComp,
  [sym_arrayComp] = sym_arrayComp,
  [sym_spreadStar] = sym_spreadStar,
  [sym_spread] = sym_spread,
  [sym_key] = sym_key,
  [sym_pair] = sym_pair,
  [sym_ident] = sym_ident,
  [sym_comparisonOperator] = sym_comparisonOperator,
  [sym_keytype] = sym_keytype,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_ruledecl] = sym_ruledecl,
  [sym_letdecl] = sym_letdecl,
  [sym_importdecl] = sym_importdecl,
  [sym_typedef] = sym_typedef,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_funccall_repeat1] = aux_sym_funccall_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_importdecl_repeat1] = aux_sym_importdecl_repeat1,
  [aux_sym_typedef_repeat1] = aux_sym_typedef_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_funccall] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_pairComp] = {
    .visible = true,
    .named = true,
  },
  [sym_arrayComp] = {
    .visible = true,
    .named = true,
  },
  [sym_spreadStar] = {
    .visible = true,
    .named = true,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comparisonOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_keytype] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_ruledecl] = {
    .visible = true,
    .named = true,
  },
  [sym_letdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_importdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_funccall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importdecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_definition = 1,
  field_direction = 2,
  field_export = 3,
  field_ident = 4,
  field_in = 5,
  field_keyAs = 6,
  field_name = 7,
  field_names = 8,
  field_postfix = 9,
  field_prefix = 10,
  field_ref = 11,
  field_rescue = 12,
  field_type = 13,
  field_value = 14,
  field_valueAs = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_definition] = "definition",
  [field_direction] = "direction",
  [field_export] = "export",
  [field_ident] = "ident",
  [field_in] = "in",
  [field_keyAs] = "keyAs",
  [field_name] = "name",
  [field_names] = "names",
  [field_postfix] = "postfix",
  [field_prefix] = "prefix",
  [field_ref] = "ref",
  [field_rescue] = "rescue",
  [field_type] = "type",
  [field_value] = "value",
  [field_valueAs] = "valueAs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 3},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 4},
  [18] = {.index = 36, .length = 3},
  [19] = {.index = 39, .length = 3},
  [20] = {.index = 42, .length = 3},
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 3},
  [23] = {.index = 52, .length = 2},
  [24] = {.index = 54, .length = 3},
  [25] = {.index = 57, .length = 4},
  [26] = {.index = 61, .length = 1},
  [27] = {.index = 62, .length = 2},
  [28] = {.index = 64, .length = 3},
  [29] = {.index = 67, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_ident, 1},
  [2] =
    {field_name, 1},
    {field_prefix, 0},
  [4] =
    {field_name, 0},
    {field_postfix, 1},
  [6] =
    {field_name, 0},
    {field_name, 1},
  [8] =
    {field_export, 0},
    {field_ident, 2},
  [10] =
    {field_direction, 0},
    {field_ref, 2},
  [12] =
    {field_name, 1},
    {field_postfix, 2},
    {field_prefix, 0},
  [15] =
    {field_name, 1},
    {field_name, 2},
    {field_prefix, 0},
  [18] =
    {field_name, 0},
    {field_name, 1},
    {field_postfix, 2},
  [21] =
    {field_type, 0},
  [22] =
    {field_value, 2},
  [23] =
    {field_direction, 0},
    {field_names, 1},
    {field_ref, 3},
  [26] =
    {field_ident, 1},
    {field_type, 3},
  [28] =
    {field_ident, 1},
    {field_value, 3},
  [30] =
    {field_definition, 3},
    {field_name, 1},
  [32] =
    {field_name, 1},
    {field_name, 2},
    {field_postfix, 3},
    {field_prefix, 0},
  [36] =
    {field_export, 0},
    {field_ident, 2},
    {field_type, 4},
  [39] =
    {field_export, 0},
    {field_ident, 2},
    {field_value, 4},
  [42] =
    {field_definition, 4},
    {field_export, 0},
    {field_name, 2},
  [45] =
    {field_direction, 0},
    {field_names, 1},
    {field_names, 2},
    {field_ref, 4},
  [49] =
    {field_definition, 3},
    {field_definition, 4},
    {field_name, 1},
  [52] =
    {field_rescue, 2},
    {field_type, 0},
  [54] =
    {field_in, 4},
    {field_value, 0},
    {field_valueAs, 2},
  [57] =
    {field_definition, 4},
    {field_definition, 5},
    {field_export, 0},
    {field_name, 2},
  [61] =
    {field_value, 5},
  [62] =
    {field_rescue, 4},
    {field_type, 0},
  [64] =
    {field_in, 8},
    {field_keyAs, 6},
    {field_value, 4},
  [67] =
    {field_in, 10},
    {field_keyAs, 6},
    {field_value, 4},
    {field_valueAs, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(117);
      if (lookahead == '>') ADVANCE(118);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '*') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '0') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '0') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_export);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 56},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 56},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 56},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 56},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(181),
    [sym_statement] = STATE(2),
    [sym__value] = STATE(59),
    [sym_funccall] = STATE(4),
    [sym_object] = STATE(4),
    [sym_ident] = STATE(183),
    [sym_array] = STATE(4),
    [sym_string] = STATE(4),
    [sym_ruledecl] = STATE(59),
    [sym_letdecl] = STATE(59),
    [sym_importdecl] = STATE(59),
    [sym_typedef] = STATE(59),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_ident_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_null] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(19),
    [anon_sym_rule] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_import] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_export,
    ACTIONS(21), 1,
      anon_sym_rule,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(183), 1,
      sym_ident,
    STATE(3), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
    STATE(59), 5,
      sym__value,
      sym_ruledecl,
      sym_letdecl,
      sym_importdecl,
      sym_typedef,
  [62] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      aux_sym_ident_token1,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_export,
    ACTIONS(54), 1,
      anon_sym_rule,
    ACTIONS(57), 1,
      anon_sym_let,
    ACTIONS(60), 1,
      anon_sym_import,
    ACTIONS(63), 1,
      anon_sym_type,
    STATE(183), 1,
      sym_ident,
    STATE(3), 2,
      sym_statement,
      aux_sym_document_repeat1,
    ACTIONS(48), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
    STATE(59), 5,
      sym__value,
      sym_ruledecl,
      sym_letdecl,
      sym_importdecl,
      sym_typedef,
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(66), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(82), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(102), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
  [460] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    STATE(112), 1,
      sym__value,
    STATE(161), 1,
      sym_ident,
    STATE(190), 1,
      sym_expr,
    STATE(143), 2,
      sym_arrayComp,
      sym_spreadStar,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [509] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__value,
    STATE(161), 1,
      sym_ident,
    STATE(190), 1,
      sym_expr,
    STATE(133), 2,
      sym_arrayComp,
      sym_spreadStar,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [558] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_else,
    STATE(79), 1,
      sym_comparisonOperator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(132), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [591] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym__value,
    STATE(161), 1,
      sym_ident,
    STATE(190), 1,
      sym_expr,
    STATE(139), 2,
      sym_arrayComp,
      sym_spreadStar,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [640] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(152), 1,
      sym_number,
    STATE(111), 1,
      sym_key,
    ACTIONS(146), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 2,
      sym_ident,
      sym_string,
    STATE(132), 4,
      sym_pairComp,
      sym_spreadStar,
      sym_spread,
      sym_pair,
  [686] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_key,
    ACTIONS(146), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 2,
      sym_ident,
      sym_string,
    STATE(124), 4,
      sym_pairComp,
      sym_spreadStar,
      sym_spread,
      sym_pair,
  [732] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_key,
    ACTIONS(146), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 2,
      sym_ident,
      sym_string,
    STATE(142), 4,
      sym_pairComp,
      sym_spreadStar,
      sym_spread,
      sym_pair,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(160), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [804] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    STATE(148), 1,
      sym__value,
    STATE(161), 1,
      sym_ident,
    STATE(190), 1,
      sym_expr,
    STATE(160), 2,
      sym_arrayComp,
      sym_spreadStar,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [850] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT_DOT_DOT_STAR,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(152), 1,
      sym_number,
    STATE(111), 1,
      sym_key,
    ACTIONS(146), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 2,
      sym_ident,
      sym_string,
    STATE(162), 4,
      sym_pairComp,
      sym_spreadStar,
      sym_spread,
      sym_pair,
  [893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_typedef_repeat1,
    ACTIONS(162), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(164), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_typedef_repeat1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(170), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [951] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_typedef_repeat1,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(177), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_typedef_repeat1,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(181), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_typedef_repeat1,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(185), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(84), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(104), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_else,
    ACTIONS(187), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(189), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(76), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(195), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(92), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_EQ,
    ACTIONS(160), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(201), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(68), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 16,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_for,
      anon_sym_in,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_from,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(100), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(108), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(207), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(211), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(96), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_PIPE,
    ACTIONS(170), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(80), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(72), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(88), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(112), 10,
      aux_sym_ident_token1,
      anon_sym_else,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(215), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1545] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    STATE(161), 1,
      sym_ident,
    STATE(178), 1,
      sym_expr,
    STATE(179), 1,
      sym__value,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1584] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(221), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1646] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(227), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1708] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(233), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(239), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(243), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(247), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(251), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [1864] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(29), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1900] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(46), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1936] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(125), 1,
      sym_ident,
    STATE(174), 1,
      sym__value,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [1972] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym_number,
    STATE(175), 1,
      sym__value,
    STATE(195), 1,
      sym_ident,
    ACTIONS(126), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(91), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2008] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(58), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2044] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(28), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2080] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(117), 1,
      sym_ident,
    STATE(167), 1,
      sym__value,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(43), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2152] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(172), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2188] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(171), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2224] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(140), 1,
      sym_ident,
    STATE(155), 1,
      sym__value,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(255), 9,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
      anon_sym_export,
      anon_sym_rule,
      anon_sym_let,
      anon_sym_import,
      anon_sym_type,
  [2282] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(138), 1,
      sym_ident,
    STATE(165), 1,
      sym__value,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2318] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(154), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2354] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(44), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2390] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_number,
    STATE(61), 1,
      sym__value,
    STATE(183), 1,
      sym_ident,
    ACTIONS(17), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2426] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym_number,
    STATE(33), 1,
      sym__value,
    STATE(196), 1,
      sym_ident,
    ACTIONS(265), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(39), 4,
      sym_funccall,
      sym_object,
      sym_array,
      sym_string,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_else,
  [2479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_for,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_else,
  [2496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(152), 1,
      sym_number,
    STATE(188), 1,
      sym_key,
    ACTIONS(146), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(148), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(87), 2,
      sym_ident,
      sym_string,
  [2524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_key_repeat1,
    ACTIONS(271), 2,
      anon_sym_BANG,
      anon_sym_QMARK,
    ACTIONS(267), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_key_repeat1,
    ACTIONS(273), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_BANG,
      anon_sym_QMARK,
  [2564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(86), 1,
      aux_sym_key_repeat1,
    ACTIONS(280), 2,
      anon_sym_BANG,
      anon_sym_QMARK,
    ACTIONS(278), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_key_repeat1,
    ACTIONS(284), 2,
      anon_sym_BANG,
      anon_sym_QMARK,
    ACTIONS(282), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_key_repeat1,
    ACTIONS(288), 2,
      anon_sym_BANG,
      anon_sym_QMARK,
    ACTIONS(286), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(292), 4,
      aux_sym_ident_token1,
      sym_true,
      sym_false,
      sym_null,
  [2643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 8,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_QMARK,
  [2657] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(294), 1,
      anon_sym_rule,
    ACTIONS(296), 1,
      anon_sym_let,
    ACTIONS(298), 1,
      anon_sym_from,
    ACTIONS(300), 1,
      anon_sym_type,
    STATE(146), 1,
      sym_ident,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2745] = 5,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    STATE(189), 1,
      sym_string_content,
    ACTIONS(304), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [2762] = 5,
    ACTIONS(306), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    STATE(192), 1,
      sym_string_content,
    ACTIONS(304), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(312), 1,
      sym_number,
    STATE(85), 2,
      sym_ident,
      sym_string,
  [2829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(318), 1,
      anon_sym_else,
    STATE(66), 1,
      sym_comparisonOperator,
    ACTIONS(134), 2,
      anon_sym_LT,
      anon_sym_GT,
  [2879] = 5,
    ACTIONS(306), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      aux_sym_string_content_repeat1,
    STATE(180), 1,
      sym_string_content,
    ACTIONS(304), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [2896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    ACTIONS(322), 1,
      sym_number,
    STATE(89), 2,
      sym_ident,
      sym_string,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 5,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_for,
      anon_sym_else,
  [2935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_COLON,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      anon_sym_for,
    STATE(149), 1,
      aux_sym_array_repeat1,
  [2965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_for,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_array_repeat1,
  [2981] = 4,
    ACTIONS(306), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(342), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [2995] = 4,
    ACTIONS(306), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(346), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [3009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_for,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_array_repeat1,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_from,
    STATE(141), 1,
      aux_sym_importdecl_repeat1,
  [3049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_object_repeat1,
  [3062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_array_repeat1,
  [3075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_array_repeat1,
  [3088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_funccall_repeat1,
  [3101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(106), 1,
      sym_ident,
    STATE(194), 1,
      sym_keytype,
  [3114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym_object_repeat1,
  [3127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_object_repeat1,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_funccall_repeat1,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(18), 1,
      sym_ident,
    STATE(56), 1,
      sym_keytype,
  [3177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_funccall_repeat1,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_object_repeat1,
  [3223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_array_repeat1,
  [3236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_funccall_repeat1,
  [3249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_funccall_repeat1,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_funccall_repeat1,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_ident_token1,
    ACTIONS(298), 1,
      anon_sym_from,
    STATE(146), 1,
      sym_ident,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_array_repeat1,
  [3312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_from,
    STATE(141), 1,
      aux_sym_importdecl_repeat1,
  [3336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_object_repeat1,
  [3349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_array_repeat1,
  [3362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_ident_token1,
    STATE(18), 1,
      sym_ident,
    STATE(60), 1,
      sym_keytype,
  [3375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_array_repeat1,
  [3388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_from,
    STATE(118), 1,
      aux_sym_importdecl_repeat1,
  [3401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_object_repeat1,
  [3414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_for,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_array_repeat1,
  [3438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_funccall_repeat1,
  [3451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_object_repeat1,
  [3464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(163), 1,
      sym_ident,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_string,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_string,
  [3510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_ident_token1,
    STATE(35), 1,
      sym_ident,
  [3520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(182), 1,
      sym_ident,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(185), 1,
      sym_ident,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_for,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_string,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(186), 1,
      sym_ident,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(184), 1,
      sym_ident,
  [3620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_in,
  [3630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_ident_token1,
    STATE(38), 1,
      sym_ident,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(169), 1,
      sym_ident,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_else,
  [3684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(191), 1,
      sym_ident,
  [3694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_ident_token1,
    STATE(193), 1,
      sym_ident,
  [3704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_for,
  [3711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_for,
  [3718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_EQ,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_in,
  [3753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_EQ,
  [3760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
  [3781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_for,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_in,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LPAREN,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 208,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 320,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 376,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 432,
  [SMALL_STATE(16)] = 460,
  [SMALL_STATE(17)] = 509,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 686,
  [SMALL_STATE(22)] = 732,
  [SMALL_STATE(23)] = 778,
  [SMALL_STATE(24)] = 804,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 893,
  [SMALL_STATE(27)] = 922,
  [SMALL_STATE(28)] = 951,
  [SMALL_STATE(29)] = 980,
  [SMALL_STATE(30)] = 1009,
  [SMALL_STATE(31)] = 1038,
  [SMALL_STATE(32)] = 1062,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1112,
  [SMALL_STATE(35)] = 1136,
  [SMALL_STATE(36)] = 1162,
  [SMALL_STATE(37)] = 1186,
  [SMALL_STATE(38)] = 1210,
  [SMALL_STATE(39)] = 1236,
  [SMALL_STATE(40)] = 1260,
  [SMALL_STATE(41)] = 1282,
  [SMALL_STATE(42)] = 1306,
  [SMALL_STATE(43)] = 1330,
  [SMALL_STATE(44)] = 1354,
  [SMALL_STATE(45)] = 1378,
  [SMALL_STATE(46)] = 1402,
  [SMALL_STATE(47)] = 1426,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1474,
  [SMALL_STATE(50)] = 1498,
  [SMALL_STATE(51)] = 1522,
  [SMALL_STATE(52)] = 1545,
  [SMALL_STATE(53)] = 1584,
  [SMALL_STATE(54)] = 1623,
  [SMALL_STATE(55)] = 1646,
  [SMALL_STATE(56)] = 1685,
  [SMALL_STATE(57)] = 1708,
  [SMALL_STATE(58)] = 1747,
  [SMALL_STATE(59)] = 1770,
  [SMALL_STATE(60)] = 1795,
  [SMALL_STATE(61)] = 1818,
  [SMALL_STATE(62)] = 1841,
  [SMALL_STATE(63)] = 1864,
  [SMALL_STATE(64)] = 1900,
  [SMALL_STATE(65)] = 1936,
  [SMALL_STATE(66)] = 1972,
  [SMALL_STATE(67)] = 2008,
  [SMALL_STATE(68)] = 2044,
  [SMALL_STATE(69)] = 2080,
  [SMALL_STATE(70)] = 2116,
  [SMALL_STATE(71)] = 2152,
  [SMALL_STATE(72)] = 2188,
  [SMALL_STATE(73)] = 2224,
  [SMALL_STATE(74)] = 2260,
  [SMALL_STATE(75)] = 2282,
  [SMALL_STATE(76)] = 2318,
  [SMALL_STATE(77)] = 2354,
  [SMALL_STATE(78)] = 2390,
  [SMALL_STATE(79)] = 2426,
  [SMALL_STATE(80)] = 2462,
  [SMALL_STATE(81)] = 2479,
  [SMALL_STATE(82)] = 2496,
  [SMALL_STATE(83)] = 2524,
  [SMALL_STATE(84)] = 2545,
  [SMALL_STATE(85)] = 2564,
  [SMALL_STATE(86)] = 2585,
  [SMALL_STATE(87)] = 2606,
  [SMALL_STATE(88)] = 2627,
  [SMALL_STATE(89)] = 2643,
  [SMALL_STATE(90)] = 2657,
  [SMALL_STATE(91)] = 2679,
  [SMALL_STATE(92)] = 2690,
  [SMALL_STATE(93)] = 2701,
  [SMALL_STATE(94)] = 2712,
  [SMALL_STATE(95)] = 2723,
  [SMALL_STATE(96)] = 2734,
  [SMALL_STATE(97)] = 2745,
  [SMALL_STATE(98)] = 2762,
  [SMALL_STATE(99)] = 2779,
  [SMALL_STATE(100)] = 2790,
  [SMALL_STATE(101)] = 2801,
  [SMALL_STATE(102)] = 2812,
  [SMALL_STATE(103)] = 2829,
  [SMALL_STATE(104)] = 2840,
  [SMALL_STATE(105)] = 2851,
  [SMALL_STATE(106)] = 2862,
  [SMALL_STATE(107)] = 2879,
  [SMALL_STATE(108)] = 2896,
  [SMALL_STATE(109)] = 2913,
  [SMALL_STATE(110)] = 2924,
  [SMALL_STATE(111)] = 2935,
  [SMALL_STATE(112)] = 2949,
  [SMALL_STATE(113)] = 2965,
  [SMALL_STATE(114)] = 2981,
  [SMALL_STATE(115)] = 2995,
  [SMALL_STATE(116)] = 3009,
  [SMALL_STATE(117)] = 3025,
  [SMALL_STATE(118)] = 3036,
  [SMALL_STATE(119)] = 3049,
  [SMALL_STATE(120)] = 3062,
  [SMALL_STATE(121)] = 3075,
  [SMALL_STATE(122)] = 3088,
  [SMALL_STATE(123)] = 3101,
  [SMALL_STATE(124)] = 3114,
  [SMALL_STATE(125)] = 3127,
  [SMALL_STATE(126)] = 3138,
  [SMALL_STATE(127)] = 3151,
  [SMALL_STATE(128)] = 3164,
  [SMALL_STATE(129)] = 3177,
  [SMALL_STATE(130)] = 3188,
  [SMALL_STATE(131)] = 3201,
  [SMALL_STATE(132)] = 3210,
  [SMALL_STATE(133)] = 3223,
  [SMALL_STATE(134)] = 3236,
  [SMALL_STATE(135)] = 3249,
  [SMALL_STATE(136)] = 3262,
  [SMALL_STATE(137)] = 3275,
  [SMALL_STATE(138)] = 3288,
  [SMALL_STATE(139)] = 3299,
  [SMALL_STATE(140)] = 3312,
  [SMALL_STATE(141)] = 3323,
  [SMALL_STATE(142)] = 3336,
  [SMALL_STATE(143)] = 3349,
  [SMALL_STATE(144)] = 3362,
  [SMALL_STATE(145)] = 3375,
  [SMALL_STATE(146)] = 3388,
  [SMALL_STATE(147)] = 3401,
  [SMALL_STATE(148)] = 3414,
  [SMALL_STATE(149)] = 3425,
  [SMALL_STATE(150)] = 3438,
  [SMALL_STATE(151)] = 3451,
  [SMALL_STATE(152)] = 3464,
  [SMALL_STATE(153)] = 3474,
  [SMALL_STATE(154)] = 3484,
  [SMALL_STATE(155)] = 3492,
  [SMALL_STATE(156)] = 3500,
  [SMALL_STATE(157)] = 3510,
  [SMALL_STATE(158)] = 3520,
  [SMALL_STATE(159)] = 3530,
  [SMALL_STATE(160)] = 3540,
  [SMALL_STATE(161)] = 3548,
  [SMALL_STATE(162)] = 3558,
  [SMALL_STATE(163)] = 3566,
  [SMALL_STATE(164)] = 3574,
  [SMALL_STATE(165)] = 3584,
  [SMALL_STATE(166)] = 3592,
  [SMALL_STATE(167)] = 3602,
  [SMALL_STATE(168)] = 3610,
  [SMALL_STATE(169)] = 3620,
  [SMALL_STATE(170)] = 3630,
  [SMALL_STATE(171)] = 3640,
  [SMALL_STATE(172)] = 3648,
  [SMALL_STATE(173)] = 3656,
  [SMALL_STATE(174)] = 3666,
  [SMALL_STATE(175)] = 3674,
  [SMALL_STATE(176)] = 3684,
  [SMALL_STATE(177)] = 3694,
  [SMALL_STATE(178)] = 3704,
  [SMALL_STATE(179)] = 3711,
  [SMALL_STATE(180)] = 3718,
  [SMALL_STATE(181)] = 3725,
  [SMALL_STATE(182)] = 3732,
  [SMALL_STATE(183)] = 3739,
  [SMALL_STATE(184)] = 3746,
  [SMALL_STATE(185)] = 3753,
  [SMALL_STATE(186)] = 3760,
  [SMALL_STATE(187)] = 3767,
  [SMALL_STATE(188)] = 3774,
  [SMALL_STATE(189)] = 3781,
  [SMALL_STATE(190)] = 3788,
  [SMALL_STATE(191)] = 3795,
  [SMALL_STATE(192)] = 3802,
  [SMALL_STATE(193)] = 3809,
  [SMALL_STATE(194)] = 3816,
  [SMALL_STATE(195)] = 3823,
  [SMALL_STATE(196)] = 3830,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(166),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(177),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funccall, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funccall, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funccall, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funccall, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funccall, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funccall, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keytype, 1, .production_id = 11),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keytype, 1, .production_id = 11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 25),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 25),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(64),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 4, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 4, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 5, .production_id = 20),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 5, .production_id = 20),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 5, .production_id = 22),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 5, .production_id = 22),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keytype, 3, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keytype, 3, .production_id = 11),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letdecl, 3, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letdecl, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letdecl, 2, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letdecl, 2, .production_id = 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keytype, 3, .production_id = 23),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keytype, 3, .production_id = 23),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keytype, 5, .production_id = 27),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keytype, 5, .production_id = 27),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importdecl, 5, .production_id = 21),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importdecl, 5, .production_id = 21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importdecl, 4, .production_id = 13),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importdecl, 4, .production_id = 13),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruledecl, 4, .production_id = 14),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruledecl, 4, .production_id = 14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letdecl, 4, .production_id = 15),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letdecl, 4, .production_id = 15),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruledecl, 5, .production_id = 18),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruledecl, 5, .production_id = 18),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letdecl, 5, .production_id = 19),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letdecl, 5, .production_id = 19),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importdecl, 3, .production_id = 7),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_importdecl, 3, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(108),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparisonOperator, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparisonOperator, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3, .production_id = 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 4, .production_id = 17),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(115),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayComp, 5, .production_id = 24),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spreadStar, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funccall_repeat1, 2), SHIFT_REPEAT(72),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funccall_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pairComp, 9, .production_id = 28),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pairComp, 11, .production_id = 29),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importdecl_repeat1, 2), SHIFT_REPEAT(152),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importdecl_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(25),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 12),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 6, .production_id = 26),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mustard(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
