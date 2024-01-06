#include <stdio.h>
#include <stdlib.h>

char *get_description(int speed) {
  if (speed < 1) {
    return "Calm";
  } else if (speed >= 1 && speed <=3) {
    return "Light air";
  } else if (speed >= 4 && speed <= 27) {
    return "Breeze";
  } else if (speed >= 28 && speed <= 47) {
    return "Gale";
  } else if (speed >= 48 && speed <= 63) {
    return "Storm";
  } else {
    return "Hurricane";
  }
}

int main(void) {
  int wind_speed = 0;
  char *description = "";

  printf("Enter wind speed(knots): ");
  scanf("%d", &wind_speed);

  description = get_description(wind_speed);
  printf("Description: %s\n", description);

  return EXIT_SUCCESS;
}
