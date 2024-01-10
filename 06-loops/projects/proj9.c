#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float loan, interest_rate, monthly_payment;
  float monthly_interest_payment;
  float balance_post_first_payment, balance_post_second_payment,
      balance_post_third_payment;
  int num_of_payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("Enter number of payments to make: ");
  scanf("%d", &num_of_payments);

  monthly_interest_payment = (loan * (interest_rate / 100)) / 12;

  float balance = loan;
  for (int i = 1; i <= num_of_payments; i++) {
    balance = balance - monthly_payment + monthly_interest_payment;
    printf("Balance remaining after payment %d: %.2f\n", i, balance);
  }

  return EXIT_SUCCESS;
}
