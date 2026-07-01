; highlights.scm - resaltado de sintaxis AdvPL/TLPP

(comment) @comment
(preproc) @keyword.directive
(string) @string
(number) @number
(operator) @operator
(punctuation) @punctuation.delimiter

(keyword_statement) @keyword

(function_definition
  keyword: _ @keyword.function)
(function_definition
  name: (identifier) @function)

(class_definition
  keyword: _ @keyword)
(class_definition
  name: (identifier) @type)

(identifier) @variable
