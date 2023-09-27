#ifndef S21_SMARTCALC_V1_0_UTILS_H
#define S21_SMARTCALC_V1_0_UTILS_H

#define BUFFER 256

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void replaceSubString(char *str, const char *oldFunc, const char *newFunc);
void removeNewline(char *str);
void appendChar(char *str, char ch);
int isFunction(char ch);
int getPrecedence(char ch);
bool isValidExpression(const char *expr);
bool isOperator(char ch);

#endif  // S21_SMARTCALC_V1_0_UTILS_H
