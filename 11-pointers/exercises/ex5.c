#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
  long int total_sec;
  int hr, min, sec;

  printf("Enter total seconds since midnight: ");
  scanf("%ld", &total_sec);

  split_time(total_sec, &hr, &min, &sec);

  printf("hour: %d\nmin: %d\nsec: %d\n", hr, min, sec);

  return EXIT_SUCCESS;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
  *hr = total_sec / (60 * 60);
  *min = (total_sec % (60 * 60)) / 60;
  *sec = total_sec % 60;
}
