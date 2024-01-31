#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q);

int main(void) {
  int num1 = 0;
  int num2 = 0;

  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);

  swap(&num1, &num2);

  printf("num1: %d | num2: %d\n", num1, num2);

  return EXIT_SUCCESS;
}

void swap(int *p, int *q) {
  int temp;

  temp = *p;
  *p = *q;
  *q = temp;
}
