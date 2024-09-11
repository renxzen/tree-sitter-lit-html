#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_js_expression_value = 11,
  sym_entity = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_quoted_attribute_value_token1 = 14,
  sym_text = 15,
  sym__start_tag_name = 16,
  sym__script_start_tag_name = 17,
  sym__style_start_tag_name = 18,
  sym__end_tag_name = 19,
  sym_erroneous_end_tag_name = 20,
  sym__implicit_end_tag = 21,
  sym_raw_text = 22,
  sym_comment = 23,
  sym_document = 24,
  sym_doctype = 25,
  sym__node = 26,
  sym_element = 27,
  sym_script_element = 28,
  sym_style_element = 29,
  sym_start_tag = 30,
  sym_script_start_tag = 31,
  sym_style_start_tag = 32,
  sym_self_closing_tag = 33,
  sym_end_tag = 34,
  sym_erroneous_end_tag = 35,
  sym_attribute = 36,
  sym_quoted_attribute_value = 37,
  aux_sym_document_repeat1 = 38,
  aux_sym_start_tag_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_js_expression_value] = "js_expression_value",
  [sym_entity] = "entity",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_js_expression_value] = sym_js_expression_value,
  [sym_entity] = sym_entity,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_js_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 15,
  [25] = 23,
  [26] = 26,
  [27] = 9,
  [28] = 21,
  [29] = 17,
  [30] = 16,
  [31] = 10,
  [32] = 22,
  [33] = 11,
  [34] = 19,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 35,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 45,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 52,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 51,
  [68] = 53,
  [69] = 55,
  [70] = 70,
  [71] = 71,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 78,
  [82] = 82,
  [83] = 79,
  [84] = 80,
  [85] = 75,
  [86] = 82,
  [87] = 74,
  [88] = 76,
  [89] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '"', 75,
        '$', 6,
        '&', 3,
        '/', 5,
        '<', 26,
        '=', 29,
        '>', 24,
        'D', 10,
        'd', 10,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(34);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 15:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(7);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '}') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_js_expression_value);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 3},
  [3] = {.lex_state = 19, .external_lex_state = 3},
  [4] = {.lex_state = 19, .external_lex_state = 3},
  [5] = {.lex_state = 19, .external_lex_state = 3},
  [6] = {.lex_state = 19, .external_lex_state = 2},
  [7] = {.lex_state = 19, .external_lex_state = 2},
  [8] = {.lex_state = 19, .external_lex_state = 3},
  [9] = {.lex_state = 19, .external_lex_state = 3},
  [10] = {.lex_state = 19, .external_lex_state = 3},
  [11] = {.lex_state = 19, .external_lex_state = 3},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 3},
  [14] = {.lex_state = 19, .external_lex_state = 3},
  [15] = {.lex_state = 19, .external_lex_state = 3},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 3},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 3},
  [20] = {.lex_state = 19, .external_lex_state = 3},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 3},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 3},
  [26] = {.lex_state = 19, .external_lex_state = 3},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 3},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 3},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 4, .external_lex_state = 4},
  [36] = {.lex_state = 4, .external_lex_state = 4},
  [37] = {.lex_state = 4, .external_lex_state = 4},
  [38] = {.lex_state = 4, .external_lex_state = 4},
  [39] = {.lex_state = 4, .external_lex_state = 4},
  [40] = {.lex_state = 4, .external_lex_state = 2},
  [41] = {.lex_state = 1, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 2},
  [44] = {.lex_state = 4, .external_lex_state = 2},
  [45] = {.lex_state = 4, .external_lex_state = 4},
  [46] = {.lex_state = 4, .external_lex_state = 2},
  [47] = {.lex_state = 4, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 4, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 6},
  [53] = {.lex_state = 4, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 6},
  [55] = {.lex_state = 4, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 0, .external_lex_state = 6},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 7},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 7},
  [63] = {.lex_state = 0, .external_lex_state = 6},
  [64] = {.lex_state = 2, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 2, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 6},
  [71] = {.lex_state = 0, .external_lex_state = 6},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 9},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 16, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 8},
  [86] = {.lex_state = 16, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_js_expression_value] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(73),
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(57),
    [sym_self_closing_tag] = STATE(31),
    [sym_erroneous_end_tag] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    STATE(52), 1,
      sym_style_start_tag,
    STATE(54), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [44] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(30), 1,
      sym_end_tag,
    STATE(52), 1,
      sym_style_start_tag,
    STATE(54), 1,
      sym_script_start_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(2), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym_end_tag,
    STATE(52), 1,
      sym_style_start_tag,
    STATE(54), 1,
      sym_script_start_tag,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(5), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LT_BANG,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(29), 1,
      sym_end_tag,
    STATE(52), 1,
      sym_style_start_tag,
    STATE(54), 1,
      sym_script_start_tag,
    ACTIONS(21), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(31), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_script_start_tag,
    STATE(57), 1,
      sym_style_start_tag,
    ACTIONS(39), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [217] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LT_BANG,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    STATE(4), 1,
      sym_start_tag,
    STATE(31), 1,
      sym_self_closing_tag,
    STATE(56), 1,
      sym_script_start_tag,
    STATE(57), 1,
      sym_style_start_tag,
    ACTIONS(52), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [258] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__implicit_end_tag,
    ACTIONS(55), 1,
      anon_sym_LT_BANG,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(52), 1,
      sym_style_start_tag,
    STATE(54), 1,
      sym_script_start_tag,
    ACTIONS(64), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(67), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(71), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(75), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(79), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(83), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(87), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(95), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(103), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LT,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(115), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LT,
    ACTIONS(119), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LT,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(107), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(91), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
  [663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_attribute_name,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_GT,
    ACTIONS(130), 1,
      anon_sym_SLASH_GT,
    ACTIONS(132), 1,
      sym_attribute_name,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_attribute_name,
    ACTIONS(134), 1,
      anon_sym_GT,
    ACTIONS(136), 1,
      anon_sym_SLASH_GT,
    STATE(38), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_GT,
    ACTIONS(132), 1,
      sym_attribute_name,
    ACTIONS(138), 1,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_attribute_name,
    ACTIONS(134), 1,
      anon_sym_GT,
    ACTIONS(140), 1,
      anon_sym_SLASH_GT,
    STATE(36), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      sym_attribute_name,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_quoted_attribute_value,
    ACTIONS(145), 2,
      sym_attribute_value,
      sym_js_expression_value,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_quoted_attribute_value,
    ACTIONS(149), 2,
      sym_attribute_value,
      sym_js_expression_value,
  [788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      sym_attribute_name,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_attribute_name,
    ACTIONS(157), 1,
      anon_sym_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(159), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_attribute_name,
    ACTIONS(163), 1,
      anon_sym_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_GT,
    STATE(43), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(159), 2,
      anon_sym_GT,
      sym_attribute_name,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym__start_tag_name,
    ACTIONS(171), 1,
      sym__script_start_tag_name,
    ACTIONS(173), 1,
      sym__style_start_tag_name,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__script_start_tag_name,
    ACTIONS(173), 1,
      sym__style_start_tag_name,
    ACTIONS(175), 1,
      sym__start_tag_name,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT_SLASH,
    ACTIONS(181), 1,
      sym_raw_text,
    STATE(25), 1,
      sym_end_tag,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT_SLASH,
    ACTIONS(185), 1,
      sym_raw_text,
    STATE(28), 1,
      sym_end_tag,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym_raw_text,
    STATE(21), 1,
      sym_end_tag,
  [959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT_SLASH,
    ACTIONS(193), 1,
      sym_raw_text,
    STATE(23), 1,
      sym_end_tag,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT_SLASH,
    STATE(14), 1,
      sym_end_tag,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT_SLASH,
    STATE(18), 1,
      sym_end_tag,
  [992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__end_tag_name,
    ACTIONS(197), 1,
      sym_erroneous_end_tag_name,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LT_SLASH,
    STATE(24), 1,
      sym_end_tag,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(199), 1,
      sym__end_tag_name,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_quoted_attribute_value_token1,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_quoted_attribute_value_token1,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LT_SLASH,
    STATE(15), 1,
      sym_end_tag,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_GT,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_erroneous_end_tag_name,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__end_tag_name,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__doctype,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_GT,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_GT,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_GT,
  [1171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_doctype_token1,
  [1178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_GT,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_erroneous_end_tag_name,
  [1199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_doctype_token1,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_GT,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__end_tag_name,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 341,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 425,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 467,
  [SMALL_STATE(22)] = 481,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 509,
  [SMALL_STATE(25)] = 523,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 551,
  [SMALL_STATE(28)] = 565,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 593,
  [SMALL_STATE(31)] = 607,
  [SMALL_STATE(32)] = 621,
  [SMALL_STATE(33)] = 635,
  [SMALL_STATE(34)] = 649,
  [SMALL_STATE(35)] = 663,
  [SMALL_STATE(36)] = 678,
  [SMALL_STATE(37)] = 695,
  [SMALL_STATE(38)] = 712,
  [SMALL_STATE(39)] = 729,
  [SMALL_STATE(40)] = 746,
  [SMALL_STATE(41)] = 760,
  [SMALL_STATE(42)] = 774,
  [SMALL_STATE(43)] = 788,
  [SMALL_STATE(44)] = 802,
  [SMALL_STATE(45)] = 816,
  [SMALL_STATE(46)] = 828,
  [SMALL_STATE(47)] = 842,
  [SMALL_STATE(48)] = 856,
  [SMALL_STATE(49)] = 867,
  [SMALL_STATE(50)] = 880,
  [SMALL_STATE(51)] = 893,
  [SMALL_STATE(52)] = 902,
  [SMALL_STATE(53)] = 915,
  [SMALL_STATE(54)] = 924,
  [SMALL_STATE(55)] = 937,
  [SMALL_STATE(56)] = 946,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 972,
  [SMALL_STATE(59)] = 982,
  [SMALL_STATE(60)] = 992,
  [SMALL_STATE(61)] = 1002,
  [SMALL_STATE(62)] = 1012,
  [SMALL_STATE(63)] = 1022,
  [SMALL_STATE(64)] = 1030,
  [SMALL_STATE(65)] = 1040,
  [SMALL_STATE(66)] = 1048,
  [SMALL_STATE(67)] = 1058,
  [SMALL_STATE(68)] = 1066,
  [SMALL_STATE(69)] = 1074,
  [SMALL_STATE(70)] = 1082,
  [SMALL_STATE(71)] = 1090,
  [SMALL_STATE(72)] = 1098,
  [SMALL_STATE(73)] = 1108,
  [SMALL_STATE(74)] = 1115,
  [SMALL_STATE(75)] = 1122,
  [SMALL_STATE(76)] = 1129,
  [SMALL_STATE(77)] = 1136,
  [SMALL_STATE(78)] = 1143,
  [SMALL_STATE(79)] = 1150,
  [SMALL_STATE(80)] = 1157,
  [SMALL_STATE(81)] = 1164,
  [SMALL_STATE(82)] = 1171,
  [SMALL_STATE(83)] = 1178,
  [SMALL_STATE(84)] = 1185,
  [SMALL_STATE(85)] = 1192,
  [SMALL_STATE(86)] = 1199,
  [SMALL_STATE(87)] = 1206,
  [SMALL_STATE(88)] = 1213,
  [SMALL_STATE(89)] = 1220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_html(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
