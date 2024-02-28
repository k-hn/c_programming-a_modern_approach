#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct date {
  int month;
  int day;
  int year;
};

/* a */
int day_of_year(struct date d);
bool is_leap_year(int year);

/* b */
int compare_dates(struct date d1, struct date d2);

int main(void)
{
  struct date input_date1;
  struct date input_date2;
  
  printf("Enter first date(dd/mm/yyyy): ");
  scanf("%d/%d/%d", &input_date1.day, &input_date1.month, &input_date1.year);
  printf("Enter second date(dd/mm/yyyy): ");
  scanf("%d/%d/%d", &input_date2.day, &input_date2.month, &input_date2.year);
  
  printf("Date1 day of year: %d\n", day_of_year(input_date1));
  printf("Date2 day of year: %d\n", day_of_year(input_date2));

  printf("Compare date1 and date2: %d\n", compare_dates(input_date1, input_date2));
  
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
