#include <stdio.h>
#include <stdlib.h>

#define MONTH_DAYS 30
#define DAY_HOURS 24
#define MONTH_HOURS (24 * 30)

double avg_temperature(double temperature_array[MONTH_DAYS][DAY_HOURS]) {
  double temperature_sum = 0.0;

  for (int i = 0; i < MONTH_DAYS; i++) {
    for (int j = 0; j < DAY_HOURS; j++) {
      temperature_sum += temperature_array[i][j];
    }
  }

  return temperature_sum / MONTH_HOURS;
}

int main(void) {
  double temperature_readings[MONTH_DAYS][DAY_HOURS] = {{3, 4, 2}, {23, 40}};

  printf("average temperature(month): %.2fC\n",
	 avg_temperature(temperature_readings));
  
  return EXIT_SUCCESS;
}
