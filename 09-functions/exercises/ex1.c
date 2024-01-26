#include <stdio.h>
#include <stdlib.h>

double triangle_area(double base, double height) /* type is provided for height */

{
    double product;		/* declaration is moved into body */
    product = base * height;
    return product / 2;
}

int main(void) {
  printf("base: 2, height: 2 = %g\n", triangle_area(2, 2));

  exit(EXIT_SUCCESS);
}
