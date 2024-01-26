#include <stdio.h>
#include <stdlib.h>

#define LEN 10

int sum_two_dimensional_array(int a[][LEN], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}

int square(int n) {
  return n * n;
}

int sum_2d_array(int n, int m, int a[n][m]) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }

  return sum;
}

int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int power(int x, int n) {
  if (n == 0) {
    return 1;
  } else {
    return x * power(x, n - 1);
  }
}


int main(void) {
  double x = 3.0;
  printf("Square: %d\n", square(x));

  exit(EXIT_SUCCESS);
}

