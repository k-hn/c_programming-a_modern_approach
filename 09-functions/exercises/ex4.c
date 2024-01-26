#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_leap_year(int year) {
  bool is_divisible_by_4 = year % 4 == 0;
  bool is_divisible_by_100 = year % 100 == 0;
  bool is_divisible_by_400 = year % 400 == 0;
  
  return (is_divisible_by_4 && !is_divisible_by_100) || is_divisible_by_400; 
}

int day_of_year(int month, int day, int year) {
  int days_in_month[12] = {31, is_leap_year(year) ? 29 : 28, 31, 30,
			    31, 30, 31, 31,
			    30, 31, 30, 31};

  int num_of_days = 0;
  for (int i = 0; i < month - 1; i++) {
    num_of_days += days_in_month[i];
  }
  num_of_days += day;
  
  return num_of_days;
}

int main(void) {
  int day, month, year, day_number;
  printf("Enter date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  day_number = day_of_year(month, day, year);
  printf("Day of year: %d\n", day_number);
  
  exit(EXIT_SUCCESS);
}
