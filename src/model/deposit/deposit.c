#include "deposit.h"

DepositResults calculateDeposit(DepositInfo info) {
  DepositResults results = {0};
  double balance = info.initialAmount;
  double monthlyRate = info.annualRate / 12 / 100;

  for (int i = 0; i < info.termMonths; i++) {
    if ((i + 1) % info.accrualPeriodicity == 0) {
      double interest = balance * monthlyRate * info.accrualPeriodicity;
      results.accruedInterest += interest;
      if (info.capitalization) {
        balance += interest;
      }
    }

    balance += info.additions;

    balance -= info.withdrawals;
  }

  results.taxAmount = results.accruedInterest * (info.taxRate / 100);
  results.finalAmount = balance - results.taxAmount;

  return results;
}
