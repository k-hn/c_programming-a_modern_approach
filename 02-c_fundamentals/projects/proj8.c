#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float loan, interest_rate, monthly_payment;
  float monthly_interest_payment;
  float balance_post_first_payment, balance_post_second_payment, balance_post_third_payment;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  monthly_interest_payment = (loan * (interest_rate / 100)) / 12;
  balance_post_first_payment = loan - monthly_payment + monthly_interest_payment;
  balance_post_second_payment = balance_post_first_payment - monthly_payment + monthly_interest_payment;
  balance_post_third_payment = balance_post_second_payment - monthly_payment + monthly_interest_payment;

  printf("Balance remaining after first payment: $%.2f\n", balance_post_first_payment);
  printf("Balance remaining after second payment: $%.2f\n", balance_post_second_payment);
  printf("Balance remaining after third payment: $%.2f\n", balance_post_third_payment);
  
  return EXIT_SUCCESS;
}
