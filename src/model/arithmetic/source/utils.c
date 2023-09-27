#include "../include/utils.h"

void replaceSubString(char *str, const char *oldFunc, const char *newFunc) {
  char buffer[BUFFER];
  char *pos;

  while ((pos = strstr(str, oldFunc))) {
    strcpy(buffer, pos + strlen(oldFunc));
    strcpy(pos, newFunc);
    strcpy(pos + strlen(newFunc), buffer);
  }
}

void removeNewline(char *str) {
  size_t len = strlen(str);
  if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
  }
}

int isFunction(char ch) {
  return ch == 'c' || ch == 's' || ch == 't' || ch == 'a' || ch == 'i' ||
         ch == 'n' || ch == 'q' || ch == 'l' || ch == 'g';
}

int getPrecedence(char ch) {
  switch (ch) {
    case '+':
    case '-':
      return 1;
    case '*':
    case '/':
    case 'm':  // для "mod"
      return 2;
    case '^':
      return 3;
    default:
      return 0;
  }
}

bool isOperator(char ch) {
  return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

bool isValidExpression(const char *expr) {
  int consecutiveDots = 0;
  bool digitBeforeDot = false;  // Проверка на наличие цифры перед точкой

  for (int i = 0; expr[i]; i++) {
    if (expr[i] == '.') {
      if (!digitBeforeDot) {
        return false;  // Если перед точкой нет цифры
      }
      consecutiveDots++;
      if (consecutiveDots > 1 || !isdigit(expr[i + 1])) {
        return false;  // Если точек больше одной или после точки нет цифры
      }
    } else if (isdigit(expr[i])) {
      digitBeforeDot = true;
      consecutiveDots = 0;
    }
  }

  return true;
}
