#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int convert_to_minutes(int hours, int minutes) {
  return hours * 60 + minutes;
}

#define MAX_SIZE 8

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
int *minutes_to_meridiem(int minutes, int result_arr[]);

int main(void) {
  int hours, minutes, minutes_since_midnight, closest_index;
  int departure_time, arrival_time;
  int departure_result[3], arrival_result[3];
  
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  minutes_since_midnight = convert_to_minutes(hours, minutes);

  find_closest_flight(minutes_since_midnight, &departure_time, &arrival_time);
  
  minutes_to_meridiem(departure_time, departure_result);
  minutes_to_meridiem(arrival_time, arrival_result);
  printf("Closes departure time is %.2d:%.2d %s, ariving at %.2d:%.2d %s\n",
	 departure_result[0],
	 departure_result[1],
	 departure_result[2] ? "p.m." : "a.m.",
	 arrival_result[0],
	 arrival_result[1],
	 arrival_result[2] ? "p.m." : "a.m.");

  return EXIT_SUCCESS;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
  int departure_times[MAX_SIZE] = {480, 583, 679,
			   767, 840, 945,
			   1140, 1305};	/* stored as minutes since midnight */
  int arrival_times[MAX_SIZE] = {616, 712, 811,
			 900, 968, 1075,
			 1280, 1438};

  int closest_index = 0;
  
  for (int i = 1; i < MAX_SIZE; i++) {
    int diff = abs(desired_time - departure_times[i]);
    int old_diff = abs(desired_time - departure_times[closest_index]);

    if (diff < old_diff) {
      closest_index = i;
      printf("closest index: %d\n", closest_index);
    }
  }
  
  *departure_time = departure_times[closest_index];
  *arrival_time = arrival_times[closest_index];
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
