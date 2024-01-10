#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int days, starting_day;
  int day_count = 1;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting_day);

  if (starting_day > 7 || starting_day < 1 || days < 0 || days > 31) {
    printf("Invalid day of week or number of days in month\n");
    return EXIT_FAILURE;
  }

  for (int position = 1; day_count <= days; position++) {
    if (position < starting_day) {
      printf("\t");
    } else {
      printf("%2d", day_count);
      if (position % 7 == 0) {
        printf("\n");
      } else {
        printf("\t");
      }
      day_count++;
    }
  }

  printf("\n");
  return EXIT_SUCCESS;
}
