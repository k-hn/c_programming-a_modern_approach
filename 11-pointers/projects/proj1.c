#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int dollar_amount;
  int num_of_20, remainder_post_20, num_of_10, remainder_post_10, num_of_5, num_of_1;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  pay_amount(dollar_amount, &num_of_20, &num_of_10, &num_of_5, &num_of_1);
  
  printf("$20 bills: %d\n", num_of_20);
  printf("$10 bills: %d\n", num_of_10);
  printf(" $5 bills: %d\n", num_of_5);
  printf(" $1 bills: %d\n", num_of_1);

  return EXIT_SUCCESS;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars % 20) / 10;
  *fives = (dollars % 10) / 5;
  *ones = dollars % 5;
}
