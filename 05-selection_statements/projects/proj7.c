#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, num2, num3, num4;
  int smallest, largest;

  printf("Enter four integers: ");
  scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

  if (num1 > num2 && num1 > num3 && num1 > num4) {
    largest = num1;
  } else if (num2 > num1 && num2 > num3 && num2 > num4) {
    largest = num2;
  } else if (num3 > num1 && num3 > num2 && num3 > num4) {
    largest = num3;
  } else {
    largest = num4;
  }

  if (num1 < num2 && num1 < num3 && num1 < num4) {
    smallest = num1;
  } else if (num2 < num1 && num2 < num3 && num2 < num4) {
    smallest = num2;
  } else if (num3 < num1 && num3 < num2 && num3 < num4) {
    smallest = num3;
  } else {
    smallest = num4;
  }
  
  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);
  
  return EXIT_SUCCESS;
}
