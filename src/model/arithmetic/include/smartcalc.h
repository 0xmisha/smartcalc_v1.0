#ifdef __cplusplus
extern "C" {
#endif

#ifndef S21_TEST_SMARTCALC_H_
#define S21_TEST_SMARTCALC_H_

#include <stdio.h>
#include <string.h>

#include "rpn.h"
#include "stack.h"
#include "utils.h"

double smartCalc(char* expression, double xValue);

#endif  // S21_TEST_SMARTCALC_H_

#ifdef __cplusplus
}
#endif