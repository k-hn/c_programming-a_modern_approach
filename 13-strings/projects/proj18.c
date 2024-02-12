#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int month, day, year;
  char *month_names[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %s %d, %.4d\n", month_names[month - 1], day, year);

  return EXIT_SUCCESS;
}
