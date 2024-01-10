#include <stdio.h>
#include <stdlib.h>

// int factorial_helper(int n, int acc) {
//   if (n <= 0) {
//     return acc;
//   } else {
//     factorial_helper(n - 1, acc * n);
//   }
// }

// int factorial(int n) { return factorial_helper(n, 1); }

// int main(void) {
//   int n;
//   float e = 1.0f;

//   printf("Enter number of times to approximate: ");
//   scanf("%d", &n);

//   for (int i = 0; i < n; i++) {
//     e += 1.0f / factorial(i);
//   }

//   printf("e approximate: %f\n", e);

//   return EXIT_SUCCESS;
// }

int main(void) {
  int n;
  float e = 1.0f, fact = 1.0f;

  printf("Enter number of times to approximate: ");
  scanf("%d", &n);

  for (int i = 1; i < n; i++) {
    fact *= i;
    e += 1.0f / fact;
  }

  printf("e approximate: %f\n", e);

  return EXIT_SUCCESS;
}
