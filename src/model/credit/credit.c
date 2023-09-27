#include "credit.h"

loanResults creditCalculator(loanInfo input) {
  loanResults results;
  double monthlyRate = input.annualRate / 1200;

  if (input.type == ANNUITY) {
    results.monthlyPayment =
        input.totalLoan * (monthlyRate * pow(1 + monthlyRate, input.months)) /
        (pow(1 + monthlyRate, input.months) - 1);
    results.totalPayment = results.monthlyPayment * input.months;
    results.totalInterest = results.totalPayment - input.totalLoan;
  } else if (input.type == DIFFERENTIATED) {
    double totalInterest = 0;
    for (int i = 0; i < input.months; i++) {
      double interest =
          (input.totalLoan - i * (input.totalLoan / input.months)) *
          monthlyRate;
      totalInterest += interest;
    }
    results.monthlyPayment =
        input.totalLoan / input.months + totalInterest / input.months;
    results.totalInterest = totalInterest;
    results.totalPayment = input.totalLoan + totalInterest;
  }
  return results;
}
