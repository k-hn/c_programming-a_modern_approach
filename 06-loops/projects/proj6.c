#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input;

  printf("Enter a number: ");
  scanf("%d", &input);

  for (int count = 1; count <= input; count++) {
    if (count % 2 == 0) {
      printf("%d\n", count * count);
    }
  }

  return EXIT_SUCCESS;
}
