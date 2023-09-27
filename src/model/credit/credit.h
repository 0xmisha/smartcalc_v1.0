#ifdef __cplusplus
extern "C" {
#endif

#ifndef S21_SMARTCALC_V1_0_CREDIT_H
#define S21_SMARTCALC_V1_0_CREDIT_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

enum loanType { ANNUITY, DIFFERENTIATED };

typedef struct loanInfo {
  double totalLoan;
  int months;
  double annualRate;
  enum loanType type;
} loanInfo;

typedef struct loanResults {
  double monthlyPayment;
  double totalInterest;
  double totalPayment;
} loanResults;

loanResults creditCalculator(loanInfo input);

#endif  // S21_SMARTCALC_V1_0_CREDIT_H

#ifdef __cplusplus
}
#endif