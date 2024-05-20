#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_code_token1 = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LT_PERCENT = 3,
  anon_sym_PERCENT_GT = 4,
  anon_sym_LT_PERCENT_EQ = 5,
  anon_sym_LT_PERCENT_DASH = 6,
  sym_template = 7,
  sym_code = 8,
  sym_content = 9,
  sym_directive = 10,
  sym_output = 11,
  aux_sym_template_repeat1 = 12,
  aux_sym_code_repeat1 = 13,
  aux_sym_content_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output] = "output",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_DASH] = anon_sym_LT_PERCENT_DASH,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output] = sym_output,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '>') ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_code_token1] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(14),
    [sym_content] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_output] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
  },
  [2] = {
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(9),
  },
  [3] = {
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_content_token1] = ACTIONS(15),
    [anon_sym_LT_PERCENT] = ACTIONS(18),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(21),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(26), 1,
      aux_sym_content_token1,
    ACTIONS(28), 1,
      anon_sym_LT_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(24), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [15] = 4,
    ACTIONS(32), 1,
      aux_sym_content_token1,
    ACTIONS(35), 1,
      anon_sym_LT_PERCENT,
    STATE(5), 1,
      aux_sym_content_repeat1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [30] = 2,
    ACTIONS(39), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [40] = 2,
    ACTIONS(43), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [50] = 2,
    ACTIONS(47), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [60] = 2,
    ACTIONS(51), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
  [70] = 4,
    ACTIONS(53), 1,
      aux_sym_code_token1,
    ACTIONS(55), 1,
      anon_sym_PERCENT_GT,
    STATE(12), 1,
      aux_sym_code_repeat1,
    STATE(15), 1,
      sym_code,
  [83] = 4,
    ACTIONS(53), 1,
      aux_sym_code_token1,
    ACTIONS(57), 1,
      anon_sym_PERCENT_GT,
    STATE(12), 1,
      aux_sym_code_repeat1,
    STATE(16), 1,
      sym_code,
  [96] = 3,
    ACTIONS(59), 1,
      aux_sym_code_token1,
    ACTIONS(61), 1,
      anon_sym_PERCENT_GT,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [106] = 3,
    ACTIONS(63), 1,
      aux_sym_code_token1,
    ACTIONS(66), 1,
      anon_sym_PERCENT_GT,
    STATE(13), 1,
      aux_sym_code_repeat1,
  [116] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [120] = 1,
    ACTIONS(70), 1,
      anon_sym_PERCENT_GT,
  [124] = 1,
    ACTIONS(72), 1,
      anon_sym_PERCENT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_underscore(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
