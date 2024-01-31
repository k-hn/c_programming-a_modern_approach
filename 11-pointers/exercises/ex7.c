#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void split_date(int day_of_year, int year, int *month, int *day);
bool is_leap_year(int year);

int main(void) {
  int day_of_year, year, month, day;

  printf("Enter day of year: ");
  scanf("%d", &day_of_year);
  printf("Enter year: ");
  scanf("%d", &year);

  split_date(day_of_year, year, &month, &day);

  printf("Day %d of %d is: %d/%d\n", day_of_year, year, day, month);

  return EXIT_SUCCESS;
}

bool is_leap_year(int year) {
  bool is_divisible_by_4 = year % 4 == 0;
  bool is_divisible_by_100 = year % 100 == 0;
  bool is_divisible_by_400 = year % 400 == 0;
  
  return (is_divisible_by_4 && !is_divisible_by_100) || is_divisible_by_400; 
}

void split_date(int day_of_year, int year, int *month, int *day) {
  int i;
  int day_count = 0;
  int days_in_month[12] = {31, is_leap_year(year) ? 29 : 28, 31, 30,
			    31, 30, 31, 31,
			    30, 31, 30, 31};

  int temp_day_of_year = day_of_year;
  /* subtract month days till remainder is less than month day */
  for (i = 0; i < 12 && temp_day_of_year > 0 ; i++) {
    if ((temp_day_of_year - days_in_month[i]) <= 0) {
      break;
    }
    
    temp_day_of_year -= days_in_month[i];    
    day_count += days_in_month[i];
  }

  *month = i + 1;
  *day = day_of_year - day_count;
}
