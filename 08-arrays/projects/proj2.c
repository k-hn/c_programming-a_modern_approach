/* Checks numbers for repeated digits */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

int main(void) {
  int digit;
  long n;
  int digit_occurrences[ARRAY_SIZE] = {0};

  printf("Enter a number: ");
  scanf("%ld", &n);

  while(n > 0) {
    digit = n % 10;
    digit_occurrences[digit] += 1;
    n /= 10;
  }

  printf("Digit:\t\t");
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("  %d", i);
  }
  printf("\n");

  printf("Occurrences:\t");
  for(int i = 0; i < ARRAY_SIZE; i++) {
    printf("  %d", digit_occurrences[i]);
  }
  printf("\n");
  
  return EXIT_SUCCESS;
}
