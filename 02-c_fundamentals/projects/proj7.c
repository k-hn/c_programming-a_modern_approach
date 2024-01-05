#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int dollar_amount;
  int num_of_20, remainder_post_20, num_of_10, remainder_post_10, num_of_5, num_of_1;
  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  num_of_20 = dollar_amount / 20;
  remainder_post_20 = dollar_amount - (20 * num_of_20);
  num_of_10 = remainder_post_20 / 10;
  remainder_post_10 = remainder_post_20 - (10 * num_of_10);
  num_of_5 = remainder_post_10 / 5;
  num_of_1 = remainder_post_10 - (5 * num_of_5);

  printf("$20 bills: %d\n", num_of_20);
  printf("$10 bills: %d\n", num_of_10);
  printf(" $5 bills: %d\n", num_of_5);
  printf(" $1 bills: %d\n", num_of_1);

  return EXIT_SUCCESS;
}
