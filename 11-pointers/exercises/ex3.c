#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum) {
  int i;

  *sum = 0.0;
  for (i = 0; i < n; i++) {
    *sum += a[i];
  }

  *avg = *sum / n;
}

int main(void) {
  double nums[5] = {1, 2, 3, 4, 5};
  double my_avg;
  double my_sum;

  avg_sum(nums, 5, &my_avg, &my_sum);
  printf("Avg is: %g\n", my_avg);
  
}
