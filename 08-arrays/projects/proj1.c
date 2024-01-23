/* Checks numbers for repeated digits */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

int main(void) {
  bool digit_seen[ARRAY_SIZE] = {false};
  int digit;
  long n;
  bool repeated_digits[ARRAY_SIZE] = {false};
  bool repitition_detected = false;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      repitition_detected = true;
      repeated_digits[digit] = true;
    }
    digit_seen[digit] = true;
    n /= 10;
  }

  if (repitition_detected) {
    printf("Repeated digit(s):");
    for (int i = 0; i < ARRAY_SIZE; i++) {
      if (repeated_digits[i]) {
	printf(" %d", i);	
      }
    }
    printf("\n");
  } else {
    printf("No repeated digit\n");
  }

  return EXIT_SUCCESS;
}
