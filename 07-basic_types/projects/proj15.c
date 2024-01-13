#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float n;
  long double factorial = 1;
  
  printf("Enter a positive integer: ");
  scanf("%f", &n);

  /* validate input */
  if (n < 0) {
    return EXIT_FAILURE;
  }

  for (int i = 1; i <= n ; i++) {
    factorial *= i;
  }

  /* loop to determine max i value that produces a valid factorial value */
  /*
  for (int i = 1; factorial > 0 && !isinf(factorial); i++) {
    
    factorial *= i;
    printf("i: %d | factorial: %Lf\n", i, factorial);
  }
  */
  
  printf("Factorial of %f: %Lf\n", n, factorial);
  
  return EXIT_SUCCESS;
}

/* largest value of n for which a correct factorial is computed */
/* a: short factorial -> 7 */
/* b: int factorial -> 16 */
/* c: long int factorial ->  20 */
/* d: long long int factorial -> 20 */
/* e: float factorial -> 34 */
/* f: double factorial -> 170 */
/* g: long double factorial ->  1755 */
