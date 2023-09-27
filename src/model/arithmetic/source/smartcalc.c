#include "../include/smartcalc.h"

double smartCalc(char *expression, double xValue) {
  char RPN[BUFFER];

  removeNewline(expression);
  replaceSubString(expression, "acos", "a");
  replaceSubString(expression, "asin", "i");
  replaceSubString(expression, "atan", "n");
  replaceSubString(expression, "cos", "c");
  replaceSubString(expression, "sin", "s");
  replaceSubString(expression, "tan", "t");
  replaceSubString(expression, "sqrt", "q");
  replaceSubString(expression, "ln", "l");
  replaceSubString(expression, "log", "g");

  toRPN(expression, RPN);
  return calcRPN(RPN, xValue);
}
