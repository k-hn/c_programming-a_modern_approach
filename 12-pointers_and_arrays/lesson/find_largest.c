#include <stdio.h>

int find_largest(int a[], int n) {
  int i, max;

  max = a[0];

  for (i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }

  return max;
}
