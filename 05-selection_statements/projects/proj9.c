#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int date1_day, date1_month, date1_year;
  int date2_day, date2_month, date2_year;
  bool date1_is_earlier;
  
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date1_month, &date1_day, &date1_year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date2_month, &date2_day, &date2_year);

  if (date1_year < date2_year) {
    date1_is_earlier = true;
    printf("%.2d/%.2d/%.2d is earlier than %d/%d/%d\n",
	   date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
    return EXIT_SUCCESS;
  } else {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
    return EXIT_SUCCESS;
  }

  
  if (date1_month < date2_month) {
    date1_is_earlier = true;
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
    return EXIT_SUCCESS;
  } else {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
    return EXIT_SUCCESS;
  }

  if (date1_day < date2_day) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
    return EXIT_SUCCESS;
  } else {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
    return EXIT_SUCCESS;
  }

  return EXIT_SUCCESS;
}
