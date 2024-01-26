#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int condensed_fact(int n) {
  return n <= 1 ? 1 : n * fact(n - 1);
}

int main(void) {
  int n;
  
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Factorial(original function): %d\n", fact(n));
  printf("Factorial(condensed function): %d\n", condensed_fact(n));

  return EXIT_SUCCESS;
}
