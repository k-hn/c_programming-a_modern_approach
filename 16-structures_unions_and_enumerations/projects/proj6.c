#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct date {
  int day;
  int month;
  int year;
};


int day_of_year(struct date d);
bool is_leap_year(int year);
int compare_dates(struct date d1, struct date d2);

int main(void) {
  struct date date1, date2;
  int comparison_result;
  
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);

  comparison_result = compare_dates(date1, date2);  
  if (date1.year < date2.year) {
    printf("%.2d/%.2d/%.2d is earlier than %d/%d/%d\n",
	   date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
  } else if (date2.year > date1.year){
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
    return EXIT_SUCCESS;
  } else if (comparison_result == -1) {
    printf("%d/%d/%d is earlier than %d/%d/%d",
	   date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
  } else if (comparison_result == 1) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
	   date2.month, date2.day, date2.year, date1.month, date1.day, date1.year);
  } else {
    printf("%d/%d/%d is the same as  %d/%d/%d\n",
	   date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
  }
  
  return EXIT_SUCCESS;
}

int day_of_year(struct date d)
{
  int num_of_days = 0;
  int feb_month_days = is_leap_year(d.year) ? 29 : 28;
  int month_days[12] = {31, feb_month_days,
			31, 30,
			31, 30,
			31, 31,
			30, 31,
			30, 31};

  for (int i = 0; i < d.month - 1; i++) {
    num_of_days += month_days[i];
  }

  num_of_days += d.day;

  return num_of_days;
}

bool is_leap_year(int year) {
  bool is_divisible_by_4 = year % 4 == 0;
  bool is_divisible_by_100 = year % 100 == 0;
  bool is_divisible_by_400 = year % 400 == 0;
  
  return (is_divisible_by_4 && !is_divisible_by_100) || is_divisible_by_400; 
}

int compare_dates(struct date d1, struct date d2)
{
  int day_of_year_d1 = day_of_year(d1);
  int day_of_year_d2 = day_of_year(d2);

  if (day_of_year_d1 < day_of_year_d2) {
    return -1;
  } else if (day_of_year_d1 > day_of_year_d2) {
    return 1;
  } else {
    return 0;
  }
}

