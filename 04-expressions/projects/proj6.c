#include <stdlib.h>
#include <stdio.h>

/**
 * EAN check calculation algorithm:
 * Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
 * Add the first, third, fifth, seventh, ninth, and eleventh digits.
 * Multiply the first sum by 3 and add it to the second sum.
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 */
int main(void) {
  int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12;
  int even_sum, odd_sum, total, check_digit;
  
  printf("Enter the first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8, &e9, &e10, &e11, &e12);

  even_sum = e2 + e4 + e6 + e8 + e10 + e12;
  odd_sum = e1 + e3 + e5 + e7 + e9 + e11;
  total = ((even_sum * 3) + odd_sum) - 1;
  check_digit = 9 - (total % 10);

  printf("Check digit: %d\n", check_digit);

  return EXIT_SUCCESS;
}
