#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* a */
  char days_in_month = 31;
  printf("%d\n", days_in_month);

  /* b */
  short days_in_year = 365;
  printf("%d\n", days_in_year);

  /* c */
  short minutes_in_day = 60 * 24;
  printf("%d\n", minutes_in_day);

  /* d */
  int seconds_in_day = 60 * 60 * 24;
  printf("%d\n", seconds_in_day);
  
  return EXIT_SUCCESS;
}
