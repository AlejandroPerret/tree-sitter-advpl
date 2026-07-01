module.exports = grammar({
  name: "advpl",

  extras: ($) => [/\s/, $.comment],

  word: ($) => $.identifier,

  conflicts: ($) => [
    [$.function_definition],
    [$.class_definition],
    [$.method_definition],
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.preproc,
        $.comment,
        $.function_definition,
        $.class_definition,
        $.method_definition,
        $.wsmethod_definition,
        $.wsservice_definition,
        $.variable_declaration,
        $.control_flow,
        $.call_expression,
        $.string,
        $.number,
        $.boolean,
        $.nil,
        $.operator,
        $.punctuation,
        $.identifier,
      ),

    // --- Preprocesador ---
    preproc: ($) =>
      token(seq(
        "#",
        /[a-zA-Z]+/,
        /[^\n]*/
      )),

    // --- Comentarios ---
    comment: ($) =>
      token(choice(
        seq("//", /[^\n]*/),
        seq(/[ \t]*\*[^\n]*/),
        seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
      )),

    // --- Booleanos y nil ---
    boolean: ($) => token(choice(/\.[Tt]\./, /\.[Ff]\./)),
    nil: ($) => token(/[Nn][Ii][Ll]/),

    // --- Definición de función ---
    function_definition: ($) =>
      seq(
        field("modifier", optional($.function_modifier)),
        field("keyword", $.function_keyword),
        field("name", $.identifier),
      ),

    function_modifier: ($) =>
      token(choice(
        /[Hh][Tt][Mm][Ll]/,
        /[Mm][Aa][Ii][Nn]/,
        /[Pp][Rr][Oo][Jj][Ee][Cc][Tt]/,
        /[Ss][Tt][Aa][Tt][Ii][Cc]/,
        /[Tt][Ee][Mm][Pp][Ll][Aa][Tt][Ee]/,
        /[Uu][Ss][Ee][Rr]/,
        /[Ww][Ee][Bb]/,
        /[Ww][Ee][Bb][Uu][Ss][Ee][Rr]/,
      )),

    function_keyword: ($) =>
      token(/[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]/),

    // --- Definición de clase ---
    class_definition: ($) =>
      choice(
        seq(
          field("keyword", token(/[Cc][Ll][Aa][Ss][Ss]/)),
          field("name", $.identifier),
          optional(seq(
            token(choice(
              /[Ii][Nn][Hh][Ee][Rr][Ii][Tt]/,
              /[Ff][Rr][Oo][Mm]/,
              /[Oo][Ff]/,
            )),
            field("parent", $.identifier),
          )),
        ),
        token(/[Ee][Nn][Dd]\s*[Cc][Ll][Aa][Ss][Ss]/),
      ),

    // --- Definición de método ---
    method_definition: ($) =>
      seq(
        field("keyword", token(/[Mm][Ee][Tt][Hh][Oo][Dd]/)),
        field("name", $.identifier),
      ),

    // --- WSMethod ---
    wsmethod_definition: ($) =>
      seq(
        field("keyword", token(/[Ww][Ss][Mm][Ee][Tt][Hh][Oo][Dd]/)),
        field("name", $.identifier),
      ),

    // --- WSService / WSClient / WSRestful ---
    wsservice_definition: ($) =>
      seq(
        field("keyword", token(choice(
          /[Ww][Ss][Ss][Ee][Rr][Vv][Ii][Cc][Ee]/,
          /[Ww][Ss][Cc][Ll][Ii][Ee][Nn][Tt]/,
          /[Ww][Ss][Rr][Ee][Ss][Tt][Ff][Uu][Ll]/,
        ))),
        field("name", $.identifier),
      ),

    // --- Declaración de variables ---
    variable_declaration: ($) =>
      seq(
        field("keyword", $.variable_keyword),
        field("name", $.identifier),
      ),

    variable_keyword: ($) =>
      token(choice(
        /[Ll][Oo][Cc][Aa][Ll]/,
        /[Ss][Tt][Aa][Tt][Ii][Cc]/,
        /[Pp][Rr][Ii][Vv][Aa][Tt][Ee]/,
        /[Pp][Uu][Bb][Ll][Ii][Cc]/,
        /[Dd][Ee][Ff][Aa][Uu][Ll][Tt]/,
        /[Pp][Aa][Rr][Aa][Mm][Ee][Tt][Ee][Rr][Ss]/,
      )),

    // --- Control de flujo ---
    control_flow: ($) =>
      token(choice(
        // Condicionales
        /[Ii][Ff]/,
        /[Ee][Ll][Ss][Ee][Ii][Ff]/,
        /[Ee][Ll][Ss][Ee]/,
        /[Ee][Nn][Dd][Ii][Ff]/,
        /[Ii][Ii][Ff]/,
        // Loops
        /[Ff][Oo][Rr]/,
        /[Nn][Ee][Xx][Tt]/,
        /[Tt][Oo]/,
        /[Ss][Tt][Ee][Pp]/,
        /[Ww][Hh][Ii][Ll][Ee]/,
        /[Ee][Nn][Dd][Dd][Oo]/,
        /[Ee][Xx][Ii][Tt]/,
        /[Ll][Oo][Oo][Pp]/,
        /[Cc][Oo][Nn][Tt][Ii][Nn][Uu][Ee]/,
        /[Gg][Oo][Tt][Oo]/,
        /[Dd][Oo]/,
        // Switch/Case
        /[Ss][Ww][Ii][Tt][Cc][Hh]/,
        /[Cc][Aa][Ss][Ee]/,
        /[Oo][Tt][Hh][Ee][Rr][Ww][Ii][Ss][Ee]/,
        /[Ee][Nn][Dd][Cc][Aa][Ss][Ee]/,
        /[Ee][Nn][Dd][Ss][Ww][Ii][Tt][Cc][Hh]/,
        // Return / Break
        /[Rr][Ee][Tt][Uu][Rr][Nn]/,
        /[Bb][Rr][Ee][Aa][Kk]/,
        // Sequence / Transaction
        /[Bb][Ee][Gg][Ii][Nn]/,
        /[Ee][Nn][Dd]/,
        /[Ss][Ee][Qq][Uu][Ee][Nn][Cc][Ee]/,
        /[Rr][Ee][Cc][Oo][Vv][Ee][Rr]/,
        /[Uu][Ss][Ii][Nn][Gg]/,
        /[Tt][Rr][Aa][Nn][Ss][Aa][Cc][Tt][Ii][Oo][Nn]/,
        // Misc
        /[Ee][Nn][Dd][Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]/,
        /[Ss][Ee][Ll][Ff]/,
        /[Ss][Uu][Pp][Ee][Rr]/,
        /[Cc][Oo][Nn][Ss][Tt][Rr][Uu][Cc][Tt][Oo][Rr]/,
        /[Pp][Rr][Oo][Tt][Ee][Cc][Tt][Ee][Dd]/,
        /[Dd][Aa][Tt][Aa]/,
        /[Pp][Rr][Oo][Pp][Ee][Rr][Tt][Yy]/,
        /[Aa][Ss]/,
        /[Nn][Aa][Mm][Ee][Ss][Pp][Aa][Cc][Ee]/,
        /[Uu][Ss][Ii][Nn][Gg]\s+[Nn][Aa][Mm][Ee][Ss][Pp][Aa][Cc][Ee]/,
        /[Aa][Nn][Dd]/,
        /[Oo][Rr]/,
        /[Nn][Oo][Tt]/,
        /[Cc][Rr][Ll][Ff]/,
      )),

    // --- Llamada a función: identificador seguido de ( ---
    call_expression: ($) =>
      seq(
        field("name", $.identifier),
        token.immediate("("),
      ),

    // --- Strings ---
    string: ($) =>
      token(choice(
        seq('"', /[^"\n]*/, '"'),
        seq("'", /[^'\n]*/, "'"),
      )),

    // --- Números ---
    number: ($) =>
      token(/\d+(\.\d+)?([eE][+-]?\d+)?/),

    // --- Operadores ---
    operator: ($) =>
      token(choice(
        ":=", "==", "<=", ">=", "<>", "!=", "->", "::",
        "+", "-", "*", "/", "=", "<", ">", "%", "++", "--",
        "+=", "-=", "*=", "/=", "%=",
      )),

    // --- Puntuación ---
    punctuation: ($) =>
      token(choice("(", ")", "{", "}", "[", "]", ",", ".", ":")),

    // --- Identificadores ---
    identifier: ($) => /[A-Za-z_][A-Za-z0-9_]*/,
  },
});
