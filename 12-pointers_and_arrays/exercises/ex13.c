#include <stdio.h>
#include <stdlib.h>

#define N 10

void print_array(int n, double a[n][n]);

int main(void) {
  double ident[N][N];
  int row, col;

  int count = N + 1;
  for (double *ptr = &ident[0][0]; ptr <= &ident[N - 1][N - 1]; ptr++) {
    if (count > N) {
      *ptr = 1.0;
      count = 0.0;
    } else {
      *ptr = 0.0;
    }
    count++;
  }

  print_array(N, ident);
    
  return EXIT_SUCCESS;
}

void print_array(int n, double a[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%lf ", a[i][j]);
    }
    printf("\n");
  }
}
