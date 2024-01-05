#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int year, month, day;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("%d%d%d\n", year, month, day);

  return EXIT_SUCCESS;
}
