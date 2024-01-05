#include <stdlib.h>
#include <stdio.h>

/* The approach fails because the value from which the remainder(after dividing by 10) is derived
 * is different for both approaches. i.e. the value is one less than in the second approach
 * (value - 1) % 10 in first approach vs (value % 10) in second approach
 */

int main(void) {
  int value = 50;
  int total = 50, remainder = 0, result = 0;

  total = total - 1;
  remainder = total % 10;
  result = 9 - remainder;
  printf("First approach result: %d\n", result);
  
  total = 50, remainder = 0, result = 0;
  remainder = total % 10;
  result = 10 - remainder;
  printf("Second approach result: %d\n", result);
  
  return EXIT_SUCCESS;
}
