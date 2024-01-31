#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int convert_to_minutes(int hours, int minutes) {
  return hours * 60 + minutes;
}

int *minutes_to_meridiem(int minutes, int result_arr[]) {
  int hours = minutes / 60;
  int mins = minutes % 60;
  bool pm = false;
  if (hours < 12) {
    if (hours == 0) {
      hours = 12;
    }
    pm = false;
  } else if (hours > 12) {
    pm = true;
    hours -= 12;
  } else {
    pm = true;
  }

  result_arr[0] = hours;
  result_arr[1] = mins;
  result_arr[2] = pm;
  return result_arr;
}

int main(void) {
  int input_hours, input_minutes, input_in_minutes, closest_index;
  int departure_times[] = {480, 583, 679,
			   767, 840, 945,
			   1140, 1305};	/* stored as minutes since midnight */
  int arrival_times[] = {616, 712, 811,
			 900, 968, 1075,
			 1280, 1438};
  int closest_departure_index = 0;
  
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &input_hours, &input_minutes);
  input_in_minutes = convert_to_minutes(input_hours, input_minutes);

  for (int i = 0; i < sizeof(departure_times) / sizeof(departure_times[0]); i++) {
    int diff = abs(input_in_minutes - departure_times[i]);
    int old_diff = abs(input_in_minutes - departure_times[closest_index]);
    if (diff < old_diff) {
      closest_index = i;
    }
  }

  int departure_result[3];
  int arrival_result[3];
  minutes_to_meridiem(departure_times[closest_index], departure_result);
  minutes_to_meridiem(arrival_times[closest_index], arrival_result);
  printf("Closes departure time is %.2d:%.2d %s, ariving at %.2d:%.2d %s\n",
	 departure_result[0],
	 departure_result[1],
	 departure_result[2] ? "p.m." : "a.m.",
	 arrival_result[0],
	 arrival_result[1],
	 arrival_result[2] ? "p.m." : "a.m.");
    
  return EXIT_SUCCESS;
}
