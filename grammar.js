module.exports = grammar({
  name: 'underscore',

  extras: _ => [],

  rules: {
    template: $ => repeat(choice(
      $.directive,
      $.output,
      $.content,
    )),

    code: _ => repeat1(/[^%]+|[%]/),

    content: _ => prec.right(repeat1(/[^<]+|</)),

    directive: $ => seq('<%', optional($.code), '%>'),

    output: $ => seq(
      choice('<%=', '<%-'),
      optional($.code),
      '%>',
    ),
  },
})
