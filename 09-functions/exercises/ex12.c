#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

double inner_product(double a[], double b[], int n);
void print_array(double arr[], int n, bool newline);

int main(void) {
  double a[ARRAY_SIZE] = {50, 6, 3, 30, 34, 41, 39, 54, 26, 31};
  double b[ARRAY_SIZE] = {74, 65, 16, 22, 26, 9, 90, 67, 56, 3};

  printf("a: ");
  print_array(a, ARRAY_SIZE, true);
  printf("b: ");
  print_array(b, ARRAY_SIZE, true);
  printf("Inner product: %g\n", inner_product(a, b, ARRAY_SIZE));

  return EXIT_SUCCESS;
}

void print_array(double arr[], int n, bool newline) {
  for (int i = 0; i < n; i++) {
    printf("%lf ", arr[i]);
  }

  if(newline) {
    printf("\n");
  }
}

double inner_product(double a[], double b[], int n) {
  double result = 1;

  for (int i = 0; i < n; i++) {
    result += a[i] * b[i];
  }

  return result;
}
