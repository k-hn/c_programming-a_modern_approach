#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double x;
  double square_root;
  double y = 1.00;
  double old_y;
  
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  while (fabs(y - ((y + x/y) / 2)) > 0.00001) {
    y = (y + x/y) / 2;
  }

  printf("%f\n", y);
  
  return EXIT_SUCCESS;
}
