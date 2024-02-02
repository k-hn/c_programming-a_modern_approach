#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

double inner_product(const double *a, const double *b, int n);

int main(void) {
  double a[ARRAY_SIZE] = {-82.964,
			  -39.134,
			  14.884,
			  -53.386,
			  -23.162};

  double b[ARRAY_SIZE] = {-86.388,
			  3.043,
			  10.219,
			  23.819,
			  30.808};

  printf("Inner product: %g\n", inner_product(a, b, ARRAY_SIZE));
  
  return EXIT_SUCCESS;
}

double inner_product(const double *a, const double *b, int n) {
  const double *ptr_a, *ptr_b;
  double result = 0;
  
  for (ptr_a = a, ptr_b = b;
       ptr_a < a + n && ptr_b < b + n;
       ptr_a++, ptr_b++) {
    result += (*ptr_a * *ptr_b);
  }

  return result;
}
