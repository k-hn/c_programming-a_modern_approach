#include <stdio.h>
#include <stdlib.h>

#define FIB_NUMBERS_SIZE 40

int main(void) {
  int fib_numbers[FIB_NUMBERS_SIZE] = {0, 1};

  for (int i = 2; i < FIB_NUMBERS_SIZE; i++) {
    fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
  }

  printf("First 40 Fibonacci numbers: \n");
  for (int i = 0; i < FIB_NUMBERS_SIZE; i++) {
    printf("%d\n", fib_numbers[i]);
  }
  
  return EXIT_SUCCESS;
}
