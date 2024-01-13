#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int conv_12hr_to_24hr(int hours, char meridiem) {
  if (toupper(meridiem) == 'P') {
    return hours == 12 ? hours : hours + 12;
  } else {
    return hours == 12 ? 0 : hours;
  }
}

int main(void) {
  int hours, minutes;
  char meridiem;
  char temp;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &meridiem);

  printf("Equivalent 24-hour time: %d:%d\n", conv_12hr_to_24hr(hours, meridiem), minutes);

  return EXIT_SUCCESS;
}
