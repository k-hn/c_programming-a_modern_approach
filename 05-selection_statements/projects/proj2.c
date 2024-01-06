#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int hours, minutes, meridiem_hours;
  bool is_pm;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours > 12) {
    meridiem_hours = hours - 12;
    is_pm = true;
  } else if (hours == 00) {
    meridiem_hours = 12;
    is_pm = false;
  } else if (hours == 12) {
    meridiem_hours = hours;
    is_pm = true;
  } else {
    meridiem_hours = hours;
    is_pm = false;
  }

  printf("Equivalent 12-hour time: %.2d:%.2d %s\n", meridiem_hours, minutes, is_pm ? "PM" : "AM");

  return EXIT_SUCCESS;
}
