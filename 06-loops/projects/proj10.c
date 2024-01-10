#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int day, month, year;
  int earlier_day, earlier_month, earlier_year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  earlier_day = day;
  earlier_month = month;
  earlier_year = year;

  while (day != 0 && month != 0 && year != 0) {
    if (year < earlier_year) {
      earlier_year = year;
      earlier_month = month;
      earlier_day = day;
      continue;
    }

    if (year < earlier_year && month < earlier_month) {
      earlier_year = year;
      earlier_month = month;
      earlier_day = day;
      continue;
    }

    if (year < earlier_year && month < earlier_month && day < earlier_day) {
      earlier_year = year;
      earlier_month = month;
      earlier_day = day;
      continue;
    }

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
  }

  printf("%.2d/%.2d/%.2d is the earliest date\n", earlier_month, earlier_day,
         earlier_year);

  return EXIT_SUCCESS;
}
