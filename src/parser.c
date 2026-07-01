#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_preproc = 2,
  sym_comment = 3,
  sym_boolean = 4,
  sym_nil = 5,
  sym_function_modifier = 6,
  sym_function_keyword = 7,
  aux_sym_class_definition_token1 = 8,
  aux_sym_class_definition_token2 = 9,
  aux_sym_class_definition_token3 = 10,
  aux_sym_method_definition_token1 = 11,
  aux_sym_wsmethod_definition_token1 = 12,
  aux_sym_wsservice_definition_token1 = 13,
  sym_variable_keyword = 14,
  sym_control_flow = 15,
  anon_sym_LPAREN = 16,
  sym_string = 17,
  sym_number = 18,
  sym_operator = 19,
  sym_punctuation = 20,
  sym_source_file = 21,
  sym__statement = 22,
  sym_function_definition = 23,
  sym_class_definition = 24,
  sym_method_definition = 25,
  sym_wsmethod_definition = 26,
  sym_wsservice_definition = 27,
  sym_variable_declaration = 28,
  sym_call_expression = 29,
  aux_sym_source_file_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_preproc] = "preproc",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_nil] = "nil",
  [sym_function_modifier] = "function_modifier",
  [sym_function_keyword] = "function_keyword",
  [aux_sym_class_definition_token1] = "class_definition_token1",
  [aux_sym_class_definition_token2] = "class_definition_token2",
  [aux_sym_class_definition_token3] = "class_definition_token3",
  [aux_sym_method_definition_token1] = "method_definition_token1",
  [aux_sym_wsmethod_definition_token1] = "wsmethod_definition_token1",
  [aux_sym_wsservice_definition_token1] = "wsservice_definition_token1",
  [sym_variable_keyword] = "variable_keyword",
  [sym_control_flow] = "control_flow",
  [anon_sym_LPAREN] = "(",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_class_definition] = "class_definition",
  [sym_method_definition] = "method_definition",
  [sym_wsmethod_definition] = "wsmethod_definition",
  [sym_wsservice_definition] = "wsservice_definition",
  [sym_variable_declaration] = "variable_declaration",
  [sym_call_expression] = "call_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_preproc] = sym_preproc,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_nil] = sym_nil,
  [sym_function_modifier] = sym_function_modifier,
  [sym_function_keyword] = sym_function_keyword,
  [aux_sym_class_definition_token1] = aux_sym_class_definition_token1,
  [aux_sym_class_definition_token2] = aux_sym_class_definition_token2,
  [aux_sym_class_definition_token3] = aux_sym_class_definition_token3,
  [aux_sym_method_definition_token1] = aux_sym_method_definition_token1,
  [aux_sym_wsmethod_definition_token1] = aux_sym_wsmethod_definition_token1,
  [aux_sym_wsservice_definition_token1] = aux_sym_wsservice_definition_token1,
  [sym_variable_keyword] = sym_variable_keyword,
  [sym_control_flow] = sym_control_flow,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_function_definition] = sym_function_definition,
  [sym_class_definition] = sym_class_definition,
  [sym_method_definition] = sym_method_definition,
  [sym_wsmethod_definition] = sym_wsmethod_definition,
  [sym_wsservice_definition] = sym_wsservice_definition,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_call_expression] = sym_call_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_function_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wsmethod_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wsservice_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_control_flow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_wsmethod_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_wsservice_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_modifier = 2,
  field_name = 3,
  field_parent = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_parent] = "parent",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
    {field_name, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_keyword, 1},
    {field_modifier, 0},
    {field_name, 2},
  [6] =
    {field_keyword, 0},
    {field_name, 1},
    {field_parent, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '#', 27,
        '%', 51,
        '\'', 3,
        '(', 44,
        '*', 33,
        '+', 52,
        '-', 54,
        '.', 57,
        '/', 50,
        ':', 56,
        '<', 53,
        '=', 51,
        '>', 51,
        '\t', 1,
        ' ', 1,
        'A', 129,
        'a', 129,
        'B', 87,
        'b', 87,
        'C', 63,
        'c', 63,
        'D', 59,
        'd', 59,
        'E', 126,
        'e', 126,
        'F', 139,
        'f', 139,
        'G', 141,
        'g', 141,
        'I', 101,
        'i', 101,
        'L', 140,
        'l', 140,
        'N', 60,
        'n', 60,
        'O', 148,
        'o', 148,
        'P', 65,
        'p', 65,
        'R', 89,
        'r', 89,
        'S', 90,
        's', 90,
        'T', 137,
        't', 137,
        'U', 158,
        'u', 158,
        'W', 107,
        'w', 107,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(28);
      if ((')' <= lookahead && lookahead <= ',') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '#', 27,
        '%', 51,
        '\'', 3,
        '*', 33,
        '+', 52,
        '-', 54,
        '.', 57,
        '/', 50,
        ':', 56,
        '<', 53,
        '=', 51,
        '>', 51,
        '\t', 1,
        ' ', 1,
        'A', 129,
        'a', 129,
        'B', 87,
        'b', 87,
        'C', 63,
        'c', 63,
        'D', 59,
        'd', 59,
        'E', 126,
        'e', 126,
        'F', 139,
        'f', 139,
        'G', 141,
        'g', 141,
        'I', 101,
        'i', 101,
        'L', 140,
        'l', 140,
        'N', 60,
        'n', 60,
        'O', 148,
        'o', 148,
        'P', 65,
        'p', 65,
        'R', 89,
        'r', 89,
        'S', 90,
        's', 90,
        'T', 137,
        't', 137,
        'U', 158,
        'u', 158,
        'W', 107,
        'w', 107,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(1);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '!', 9,
        '"', 2,
        '#', 27,
        '%', 51,
        '\'', 3,
        '*', 33,
        '+', 52,
        '-', 54,
        '.', 57,
        '/', 50,
        ':', 56,
        '<', 53,
        '=', 51,
        '>', 51,
        '\t', 1,
        ' ', 1,
        'A', 129,
        'a', 129,
        'B', 87,
        'b', 87,
        'C', 63,
        'c', 63,
        'D', 59,
        'd', 59,
        'E', 126,
        'e', 126,
        'F', 139,
        'f', 139,
        'G', 141,
        'g', 141,
        'I', 101,
        'i', 101,
        'L', 140,
        'l', 140,
        'N', 60,
        'n', 60,
        'O', 148,
        'o', 148,
        'P', 65,
        'p', 65,
        'R', 89,
        'r', 89,
        'S', 90,
        's', 90,
        'T', 137,
        't', 137,
        'U', 158,
        'u', 158,
        'W', 107,
        'w', 107,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(28);
      if (('(' <= lookahead && lookahead <= ',') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_preproc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_preproc);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_class_definition_token3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_class_definition_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_variable_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_control_flow);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_control_flow);
      ADVANCE_MAP(
        'C', 62,
        'c', 62,
        'D', 138,
        'd', 138,
        'F', 181,
        'f', 181,
        'I', 102,
        'i', 102,
        'S', 187,
        's', 187,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_control_flow);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_control_flow);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_control_flow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_punctuation);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_punctuation);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_punctuation);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(153);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      ADVANCE_MAP(
        'E', 121,
        'e', 121,
        'T', 68,
        't', 68,
        'U', 145,
        'u', 145,
        'W', 117,
        'w', 117,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'C', 1,
        'c', 1,
        'F', 2,
        'f', 2,
        'H', 3,
        'h', 3,
        'I', 4,
        'i', 4,
        'M', 5,
        'm', 5,
        'N', 6,
        'n', 6,
        'O', 7,
        'o', 7,
        'P', 8,
        'p', 8,
        'S', 9,
        's', 9,
        'T', 10,
        't', 10,
        'U', 11,
        'u', 11,
        'W', 12,
        'w', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      END_STATE();
    case 22:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        'C', 41,
        'c', 41,
        'M', 42,
        'm', 42,
        'R', 43,
        'r', 43,
        'S', 44,
        's', 44,
      );
      END_STATE();
    case 28:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 36:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_function_modifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_function_modifier);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_method_definition_token1);
      END_STATE();
    case 73:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_function_keyword);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_wsservice_definition_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_wsmethod_definition_token1);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_preproc] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_boolean] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_function_modifier] = ACTIONS(1),
    [sym_function_keyword] = ACTIONS(1),
    [aux_sym_class_definition_token1] = ACTIONS(1),
    [aux_sym_class_definition_token2] = ACTIONS(1),
    [aux_sym_class_definition_token3] = ACTIONS(1),
    [aux_sym_method_definition_token1] = ACTIONS(1),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(1),
    [aux_sym_wsservice_definition_token1] = ACTIONS(1),
    [sym_variable_keyword] = ACTIONS(1),
    [sym_control_flow] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_punctuation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_class_definition] = STATE(2),
    [sym_method_definition] = STATE(2),
    [sym_wsmethod_definition] = STATE(2),
    [sym_wsservice_definition] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_call_expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_preproc] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [sym_boolean] = ACTIONS(9),
    [sym_nil] = ACTIONS(11),
    [sym_function_modifier] = ACTIONS(13),
    [sym_function_keyword] = ACTIONS(15),
    [aux_sym_class_definition_token1] = ACTIONS(17),
    [aux_sym_class_definition_token3] = ACTIONS(19),
    [aux_sym_method_definition_token1] = ACTIONS(21),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(23),
    [aux_sym_wsservice_definition_token1] = ACTIONS(25),
    [sym_variable_keyword] = ACTIONS(27),
    [sym_control_flow] = ACTIONS(11),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(9),
    [sym_operator] = ACTIONS(11),
    [sym_punctuation] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_class_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_wsmethod_definition] = STATE(3),
    [sym_wsservice_definition] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_call_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_identifier] = ACTIONS(7),
    [sym_preproc] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
    [sym_boolean] = ACTIONS(31),
    [sym_nil] = ACTIONS(33),
    [sym_function_modifier] = ACTIONS(13),
    [sym_function_keyword] = ACTIONS(15),
    [aux_sym_class_definition_token1] = ACTIONS(17),
    [aux_sym_class_definition_token3] = ACTIONS(19),
    [aux_sym_method_definition_token1] = ACTIONS(21),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(23),
    [aux_sym_wsservice_definition_token1] = ACTIONS(25),
    [sym_variable_keyword] = ACTIONS(27),
    [sym_control_flow] = ACTIONS(33),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_operator] = ACTIONS(33),
    [sym_punctuation] = ACTIONS(33),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_class_definition] = STATE(3),
    [sym_method_definition] = STATE(3),
    [sym_wsmethod_definition] = STATE(3),
    [sym_wsservice_definition] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_call_expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_preproc] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_boolean] = ACTIONS(40),
    [sym_nil] = ACTIONS(43),
    [sym_function_modifier] = ACTIONS(46),
    [sym_function_keyword] = ACTIONS(49),
    [aux_sym_class_definition_token1] = ACTIONS(52),
    [aux_sym_class_definition_token3] = ACTIONS(55),
    [aux_sym_method_definition_token1] = ACTIONS(58),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(61),
    [aux_sym_wsservice_definition_token1] = ACTIONS(64),
    [sym_variable_keyword] = ACTIONS(67),
    [sym_control_flow] = ACTIONS(43),
    [sym_string] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_operator] = ACTIONS(43),
    [sym_punctuation] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_identifier] = ACTIONS(72),
    [sym_preproc] = ACTIONS(70),
    [sym_comment] = ACTIONS(70),
    [sym_boolean] = ACTIONS(70),
    [sym_nil] = ACTIONS(72),
    [sym_function_modifier] = ACTIONS(72),
    [sym_function_keyword] = ACTIONS(72),
    [aux_sym_class_definition_token1] = ACTIONS(72),
    [aux_sym_class_definition_token3] = ACTIONS(72),
    [aux_sym_method_definition_token1] = ACTIONS(72),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(72),
    [aux_sym_wsservice_definition_token1] = ACTIONS(72),
    [sym_variable_keyword] = ACTIONS(72),
    [sym_control_flow] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_string] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [sym_operator] = ACTIONS(72),
    [sym_punctuation] = ACTIONS(72),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_preproc] = ACTIONS(76),
    [sym_comment] = ACTIONS(76),
    [sym_boolean] = ACTIONS(76),
    [sym_nil] = ACTIONS(78),
    [sym_function_modifier] = ACTIONS(78),
    [sym_function_keyword] = ACTIONS(78),
    [aux_sym_class_definition_token1] = ACTIONS(78),
    [aux_sym_class_definition_token2] = ACTIONS(80),
    [aux_sym_class_definition_token3] = ACTIONS(78),
    [aux_sym_method_definition_token1] = ACTIONS(78),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(78),
    [aux_sym_wsservice_definition_token1] = ACTIONS(78),
    [sym_variable_keyword] = ACTIONS(78),
    [sym_control_flow] = ACTIONS(78),
    [sym_string] = ACTIONS(76),
    [sym_number] = ACTIONS(76),
    [sym_operator] = ACTIONS(78),
    [sym_punctuation] = ACTIONS(78),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [sym_preproc] = ACTIONS(82),
    [sym_comment] = ACTIONS(82),
    [sym_boolean] = ACTIONS(82),
    [sym_nil] = ACTIONS(84),
    [sym_function_modifier] = ACTIONS(84),
    [sym_function_keyword] = ACTIONS(84),
    [aux_sym_class_definition_token1] = ACTIONS(84),
    [aux_sym_class_definition_token3] = ACTIONS(84),
    [aux_sym_method_definition_token1] = ACTIONS(84),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(84),
    [aux_sym_wsservice_definition_token1] = ACTIONS(84),
    [sym_variable_keyword] = ACTIONS(84),
    [sym_control_flow] = ACTIONS(84),
    [sym_string] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [sym_operator] = ACTIONS(84),
    [sym_punctuation] = ACTIONS(84),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [sym_preproc] = ACTIONS(86),
    [sym_comment] = ACTIONS(86),
    [sym_boolean] = ACTIONS(86),
    [sym_nil] = ACTIONS(88),
    [sym_function_modifier] = ACTIONS(88),
    [sym_function_keyword] = ACTIONS(88),
    [aux_sym_class_definition_token1] = ACTIONS(88),
    [aux_sym_class_definition_token3] = ACTIONS(88),
    [aux_sym_method_definition_token1] = ACTIONS(88),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(88),
    [aux_sym_wsservice_definition_token1] = ACTIONS(88),
    [sym_variable_keyword] = ACTIONS(88),
    [sym_control_flow] = ACTIONS(88),
    [sym_string] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [sym_operator] = ACTIONS(88),
    [sym_punctuation] = ACTIONS(88),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_identifier] = ACTIONS(92),
    [sym_preproc] = ACTIONS(90),
    [sym_comment] = ACTIONS(90),
    [sym_boolean] = ACTIONS(90),
    [sym_nil] = ACTIONS(92),
    [sym_function_modifier] = ACTIONS(92),
    [sym_function_keyword] = ACTIONS(92),
    [aux_sym_class_definition_token1] = ACTIONS(92),
    [aux_sym_class_definition_token3] = ACTIONS(92),
    [aux_sym_method_definition_token1] = ACTIONS(92),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(92),
    [aux_sym_wsservice_definition_token1] = ACTIONS(92),
    [sym_variable_keyword] = ACTIONS(92),
    [sym_control_flow] = ACTIONS(92),
    [sym_string] = ACTIONS(90),
    [sym_number] = ACTIONS(90),
    [sym_operator] = ACTIONS(92),
    [sym_punctuation] = ACTIONS(92),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [sym_preproc] = ACTIONS(94),
    [sym_comment] = ACTIONS(94),
    [sym_boolean] = ACTIONS(94),
    [sym_nil] = ACTIONS(96),
    [sym_function_modifier] = ACTIONS(96),
    [sym_function_keyword] = ACTIONS(96),
    [aux_sym_class_definition_token1] = ACTIONS(96),
    [aux_sym_class_definition_token3] = ACTIONS(96),
    [aux_sym_method_definition_token1] = ACTIONS(96),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(96),
    [aux_sym_wsservice_definition_token1] = ACTIONS(96),
    [sym_variable_keyword] = ACTIONS(96),
    [sym_control_flow] = ACTIONS(96),
    [sym_string] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [sym_operator] = ACTIONS(96),
    [sym_punctuation] = ACTIONS(96),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [sym_preproc] = ACTIONS(98),
    [sym_comment] = ACTIONS(98),
    [sym_boolean] = ACTIONS(98),
    [sym_nil] = ACTIONS(100),
    [sym_function_modifier] = ACTIONS(100),
    [sym_function_keyword] = ACTIONS(100),
    [aux_sym_class_definition_token1] = ACTIONS(100),
    [aux_sym_class_definition_token3] = ACTIONS(100),
    [aux_sym_method_definition_token1] = ACTIONS(100),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(100),
    [aux_sym_wsservice_definition_token1] = ACTIONS(100),
    [sym_variable_keyword] = ACTIONS(100),
    [sym_control_flow] = ACTIONS(100),
    [sym_string] = ACTIONS(98),
    [sym_number] = ACTIONS(98),
    [sym_operator] = ACTIONS(100),
    [sym_punctuation] = ACTIONS(100),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_identifier] = ACTIONS(104),
    [sym_preproc] = ACTIONS(102),
    [sym_comment] = ACTIONS(102),
    [sym_boolean] = ACTIONS(102),
    [sym_nil] = ACTIONS(104),
    [sym_function_modifier] = ACTIONS(104),
    [sym_function_keyword] = ACTIONS(104),
    [aux_sym_class_definition_token1] = ACTIONS(104),
    [aux_sym_class_definition_token3] = ACTIONS(104),
    [aux_sym_method_definition_token1] = ACTIONS(104),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(104),
    [aux_sym_wsservice_definition_token1] = ACTIONS(104),
    [sym_variable_keyword] = ACTIONS(104),
    [sym_control_flow] = ACTIONS(104),
    [sym_string] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [sym_operator] = ACTIONS(104),
    [sym_punctuation] = ACTIONS(104),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [sym_preproc] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [sym_boolean] = ACTIONS(106),
    [sym_nil] = ACTIONS(108),
    [sym_function_modifier] = ACTIONS(108),
    [sym_function_keyword] = ACTIONS(108),
    [aux_sym_class_definition_token1] = ACTIONS(108),
    [aux_sym_class_definition_token3] = ACTIONS(108),
    [aux_sym_method_definition_token1] = ACTIONS(108),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(108),
    [aux_sym_wsservice_definition_token1] = ACTIONS(108),
    [sym_variable_keyword] = ACTIONS(108),
    [sym_control_flow] = ACTIONS(108),
    [sym_string] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
    [sym_operator] = ACTIONS(108),
    [sym_punctuation] = ACTIONS(108),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
    [sym_preproc] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [sym_boolean] = ACTIONS(110),
    [sym_nil] = ACTIONS(112),
    [sym_function_modifier] = ACTIONS(112),
    [sym_function_keyword] = ACTIONS(112),
    [aux_sym_class_definition_token1] = ACTIONS(112),
    [aux_sym_class_definition_token3] = ACTIONS(112),
    [aux_sym_method_definition_token1] = ACTIONS(112),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(112),
    [aux_sym_wsservice_definition_token1] = ACTIONS(112),
    [sym_variable_keyword] = ACTIONS(112),
    [sym_control_flow] = ACTIONS(112),
    [sym_string] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
    [sym_operator] = ACTIONS(112),
    [sym_punctuation] = ACTIONS(112),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [sym_preproc] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [sym_boolean] = ACTIONS(114),
    [sym_nil] = ACTIONS(116),
    [sym_function_modifier] = ACTIONS(116),
    [sym_function_keyword] = ACTIONS(116),
    [aux_sym_class_definition_token1] = ACTIONS(116),
    [aux_sym_class_definition_token3] = ACTIONS(116),
    [aux_sym_method_definition_token1] = ACTIONS(116),
    [aux_sym_wsmethod_definition_token1] = ACTIONS(116),
    [aux_sym_wsservice_definition_token1] = ACTIONS(116),
    [sym_variable_keyword] = ACTIONS(116),
    [sym_control_flow] = ACTIONS(116),
    [sym_string] = ACTIONS(114),
    [sym_number] = ACTIONS(114),
    [sym_operator] = ACTIONS(116),
    [sym_punctuation] = ACTIONS(116),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_identifier,
  [7] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_function_keyword,
  [21] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
  [28] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
  [35] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
  [42] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_identifier,
  [49] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [56] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_identifier,
  [63] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 7,
  [SMALL_STATE(17)] = 14,
  [SMALL_STATE(18)] = 21,
  [SMALL_STATE(19)] = 28,
  [SMALL_STATE(20)] = 35,
  [SMALL_STATE(21)] = 42,
  [SMALL_STATE(22)] = 49,
  [SMALL_STATE(23)] = 56,
  [SMALL_STATE(24)] = 63,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 2, 0, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 2, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_definition, 2, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wsmethod_definition, 2, 0, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wsmethod_definition, 2, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wsservice_definition, 2, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wsservice_definition, 2, 0, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, 0, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_definition, 4, 0, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_advpl(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
