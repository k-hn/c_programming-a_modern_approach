#include <stdio.h>
#include <stdlib.h>

#define NELEMS(a) ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {
  int nums[5] = {11, 12, 13, 14, 15};

  printf("NELEMS(nums): %d\n", NELEMS(nums));

  return EXIT_SUCCESS;
}
