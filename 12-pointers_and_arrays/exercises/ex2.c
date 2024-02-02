#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[5] = {11, 12, 13, 14, 15};
  int *low, *middle, *high;
  low = &a[0];
  high = &a[4];

  middle = &a[(high - low) / 2];

  printf("Low: %d\nMiddle: %d\nHigh: %d\n", *low, *middle, *high);
  
  return EXIT_SUCCESS;
}
