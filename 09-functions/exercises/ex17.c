#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int nonrecursive_fact(int n) {
  int result = 1;
  
  for (int i = n; i > 0; i--) {
    result *= i;
  }

  return result;
}

int main(void) {
  int n;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Factorial(original function): %d\n", fact(n));
  printf("Factorial(condensed function): %d\n", nonrecursive_fact(n));

  return EXIT_SUCCESS;
}
