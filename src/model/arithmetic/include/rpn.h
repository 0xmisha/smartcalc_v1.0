#ifndef S21_SMARTCALC_V1_0_RPN_H
#define S21_SMARTCALC_V1_0_RPN_H

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

void toRPN(const char *expression, char *result);
double calcRPN(const char *rpnExpression, double xValue);

#endif  // S21_SMARTCALC_V1_0_RPN_H
