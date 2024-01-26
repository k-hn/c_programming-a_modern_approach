#include <stdio.h>
#include <stdlib.h>

double median(double x, double y, double z)
{
  double median;
  if (x <= y) {
    if (y <= z) {
      median = y;
    } else if (x <= z) {
      median = z;
    } else {
      median = x;
    }
  } else {
    if (z <= y) {
      median = y;
    } else if (x <= z) {
      median = x;
    } else {
      median = z;
    }
  }

  return median;
}

int main(void) {
  double x, y, z;
  printf("Returns the median of three numbers.\n");
  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);

  printf("Median: %g\n", median(x, y, z));

  return EXIT_SUCCESS;
}
