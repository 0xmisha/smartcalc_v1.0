#ifdef __cplusplus
extern "C" {
#endif

#ifndef S21_SMARTCALC_V1_0_DEPOSIT_H
#define S21_SMARTCALC_V1_0_DEPOSIT_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
  double initialAmount;
  int termMonths;
  double annualRate;
  double taxRate;
  int accrualPeriodicity;  // 1 - every month, 12 - annually, etc.
  bool capitalization;
  double additions;
  double withdrawals;
} DepositInfo;

typedef struct {
  double accruedInterest;
  double taxAmount;
  double finalAmount;
} DepositResults;

DepositResults calculateDeposit(DepositInfo info);

#endif  // S21_SMARTCALC_V1_0_DEPOSIT_H

#ifdef __cplusplus
}
#endif