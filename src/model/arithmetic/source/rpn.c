#include "../include/rpn.h"

#include "../include/utils.h"

void toRPN(const char *expression, char *result) {
  if (!isValidExpression(expression)) {
    result[0] = 'e';
    return;
  }

  CharStack *stack = create_stack();
  int i, j = 0;
  for (i = 0; i < (int)strlen(expression); i++) {
    char ch = expression[i];

    if ((ch == '+' || ch == '-') &&
        (i == 0 || strchr("+-*/(^,", expression[i - 1]))) {
      if (ch == '-') {
        result[j++] = 'u';
      }
      result[j++] = ch;
      result[j++] = ' ';
      continue;
    }

    if (isdigit(ch) || ch == '.' || ch == 'x' || ch == 'X') {
      if (ch == 'x' || ch == 'X') {
        result[j++] = 'x';
        result[j++] = ' ';
      } else {
        while (i < (int)strlen(expression) &&
               (isdigit(expression[i]) || expression[i] == '.')) {
          result[j++] = expression[i++];
        }
        result[j++] = ' ';
        i--;
      }
    } else if (isFunction(ch)) {
      push_char(stack, ch);
    } else if (ch == '(') {
      push_char(stack, ch);
    } else if (ch == ',') {
      while (!is_char_empty(stack) && peek_char(stack) != '(') {
        result[j++] = pop_char(stack);
        result[j++] = ' ';
      }
      if (is_char_empty(stack)) {
        result[0] = 'e';
        destroy_char(stack);
        return;
      }
    } else if (strchr("+-*/^m", ch)) {
      while (!is_char_empty(stack) &&
             getPrecedence(peek_char(stack)) >= getPrecedence(ch)) {
        result[j++] = pop_char(stack);
        result[j++] = ' ';
      }
      push_char(stack, ch);
    } else if (ch == ')') {
      while (!is_char_empty(stack) && peek_char(stack) != '(') {
        result[j++] = pop_char(stack);
        result[j++] = ' ';
      }
      if (!is_char_empty(stack) && peek_char(stack) == '(') {
        pop_char(stack);
      } else {
        result[0] = 'e';
        destroy_char(stack);
        return;
      }
      if (!is_char_empty(stack) && isFunction(peek_char(stack))) {
        result[j++] = pop_char(stack);
        result[j++] = ' ';
      }
    }
  }

  while (!is_char_empty(stack)) {
    if (peek_char(stack) == '(' || peek_char(stack) == ')') {
      result[0] = 'e';
      destroy_char(stack);
      return;
    }
    result[j++] = pop_char(stack);
    result[j++] = ' ';
  }
  result[j] = '\0';
  destroy_char(stack);
}

double calcRPN(const char *rpnExpression, double xValue) {
  DoubleStack *stack = create_double_stack();
  double op1, op2;
  bool flag;

  if (rpnExpression[0] == 'e') flag = 1;

  char *mutableExpression = strdup(rpnExpression);
  const char *token = strtok(mutableExpression, " ");
  while (token) {
    if (strcmp(token, "u-") == 0) {
      token = strtok(NULL, " ");
      double value;
      if (strcmp(token, "x") == 0) {
        value = xValue;
      } else {
        value = atof(token);
      }
      push_double(stack, -1 * value);
    } else if (strcmp(token, "u+") == 0) {
      double value = pop_double(stack);
      push_double(stack, +value);
    } else if (strcmp(token, "+") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      push_double(stack, op1 + op2);
    } else if (strcmp(token, "-") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      push_double(stack, op1 - op2);
    } else if (strcmp(token, "*") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      push_double(stack, op1 * op2);
    } else if (strcmp(token, "/") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      if (op2 == 0) flag = 1;
      push_double(stack, op1 / op2);
    } else if (strcmp(token, "c") == 0) {
      double value = pop_double(stack);
      push_double(stack, cos(value));
    } else if (strcmp(token, "s") == 0) {
      double value = pop_double(stack);
      push_double(stack, sin(value));
    } else if (strcmp(token, "t") == 0) {
      double value = pop_double(stack);
      push_double(stack, tan(value));
    } else if (strcmp(token, "q") == 0) {
      double value = pop_double(stack);
      if (value < 0) flag = 1;
      push_double(stack, sqrt(value));
    } else if (strcmp(token, "l") == 0) {
      double value = pop_double(stack);
      if (value <= 0) flag = 1;
      push_double(stack, log(value));
    } else if (strcmp(token, "g") == 0) {
      double value = pop_double(stack);
      if (value <= 0) flag = 1;
      push_double(stack, log10(value));
    } else if (strcmp(token, "a") == 0) {
      double value = pop_double(stack);
      if (value < -1 || value > 1) flag = 1;
      push_double(stack, acos(value));
    } else if (strcmp(token, "i") == 0) {
      double value = pop_double(stack);
      if (value < -1 || value > 1) flag = 1;
      push_double(stack, asin(value));
    } else if (strcmp(token, "n") == 0) {
      double value = pop_double(stack);
      push_double(stack, atan(value));
    } else if (strcmp(token, "x") == 0) {
      push_double(stack, xValue);
    } else if (strcmp(token, "^") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      push_double(stack, pow(op1, op2));
    } else if (strcmp(token, "m") == 0) {
      op2 = pop_double(stack);
      op1 = pop_double(stack);
      push_double(stack, fmod(op1, op2));
    } else {
      push_double(stack, atof(token));
    }

    token = strtok(NULL, " ");
  }

  double result = pop_double(stack);
  destroy_double(stack);
  free(mutableExpression);
  if (flag == 1) result = NAN;
  return result;
}
