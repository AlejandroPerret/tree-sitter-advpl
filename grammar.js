module.exports = grammar({
  name: "advpl",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.preproc,
        $.comment,
        $.function_definition,
        $.class_definition,
        $.keyword_statement,
        $.string,
        $.number,
        $.identifier,
        $.operator,
        $.punctuation,
      ),

    preproc: ($) =>
      token(seq("#", /[a-zA-Z]+/, /[^\n]*/)),

    comment: ($) =>
      token(
        choice(
          seq("//", /[^\n]*/),
          seq(/\*/, /[^\n]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),

    function_definition: ($) =>
      seq(
        field(
          "keyword",
          choice(
            /[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]/,
            /[Ss][Tt][Aa][Tt][Ii][Cc]\s+[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]/,
            /[Ww][Ss][Mm][Ee][Tt][Hh][Oo][Dd]/,
            /[Mm][Ee][Tt][Hh][Oo][Dd]/,
          ),
        ),
        field("name", $.identifier),
      ),

    class_definition: ($) =>
      choice(
        seq(
          field("keyword", /[Cc][Ll][Aa][Ss][Ss]/),
          field("name", $.identifier),
        ),
        field("keyword", /[Ee][Nn][Dd][Cc][Ll][Aa][Ss][Ss]/),
      ),

    keyword_statement: ($) =>
      token(
        choice(
          ...[
            "IF", "ELSE", "ELSEIF", "ENDIF", "END",
            "DO", "WHILE", "ENDDO", "EXIT", "LOOP",
            "FOR", "NEXT", "TO", "STEP",
            "RETURN", "LOCAL", "PRIVATE", "PUBLIC", "STATIC",
            "DEFAULT", "PARAMETERS",
            "BEGIN", "SEQUENCE", "RECOVER", "USING",
            "SWITCH", "CASE", "OTHERWISE", "ENDSWITCH",
            "ENDCASE", "ENDFUNCTION",
            "PROTECTED", "DATA", "PROPERTY", "CONSTRUCTOR",
            "AS", "OF", "FROM",
            ".T.", ".F.", "NIL",
            "AND", "OR", "NOT",
          ].flatMap((kw) => [
            kw,
            kw.toLowerCase(),
            kw[0] + kw.slice(1).toLowerCase(),
          ]),
        ),
      ),

    string: ($) =>
      token(
        choice(
          seq('"', /[^"\n]*/, '"'),
          seq("'", /[^'\n]*/, "'"),
        ),
      ),

    number: ($) => token(/\d+(\.\d+)?/),

    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,

    operator: ($) =>
      token(
        choice(
          ":=", "==", "<=", ">=", "<>", "!=", "->",
          "+", "-", "*", "/", "=", "<", ">", "%", "++", "--",
        ),
      ),

    punctuation: ($) => token(choice("(", ")", "{", "}", "[", "]", ",", ".", ":")),
  },
});