/* Checks numbers for repeated digits */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

void check_for_repition(long n) {
  int digit;
  bool digit_seen[ARRAY_SIZE];
  while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit]) {
	break;
      }
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0) {
      printf("Repeated digit\n");
    } else {
      printf("No repeated digit\n");
    }
}

int main(void) {
  bool digit_seen[10] = {false};
  int digit;
  long n;
  long input;

  printf("Enter a number: ");
  scanf("%ld", &input);

  while(input > 0) {
    check_for_repition(input);

    printf("Enter a number: ");
    scanf("%ld", &input);
  }
  

  return EXIT_SUCCESS;
}
