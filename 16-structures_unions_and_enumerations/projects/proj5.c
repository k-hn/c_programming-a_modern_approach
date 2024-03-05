#include <stdio.h>
#include <stdlib.h>

#define NUM_DEPARTURE_TIMES 8

int convert_to_minutes(int hours, int minutes) {
  return hours * 60 + minutes;
}

int get_closest_index(int minutes) {
  /* start point */
  int closest_depature_index = 0;
  int departure_times[NUM_DEPARTURE_TIMES] = {
    convert_to_minutes(8, 0),
    convert_to_minutes(9, 43),
    convert_to_minutes(11, 19),
    convert_to_minutes(12, 47),
    convert_to_minutes(14, 0),
    convert_to_minutes(15, 45),
    convert_to_minutes(19, 0),
    convert_to_minutes(21, 45),
  };
  int difference = departure_times[closest_depature_index];

  for (int i = 1; i < NUM_DEPARTURE_TIMES; i++) {
    if (abs(departure_times[i] - minutes) < difference) {
      closest_depature_index = i;
      difference = abs(departure_times[i] - minutes);
    }
  }
  
  return closest_depature_index;
}

char *index_to_depature(int index) {
  char * result = "";
  
  switch(index) {
  case 0:
    result = "8:00 am";
    break;
  case 1:
    result = "9:43 am";
    break;
  case 2:
    result = "11:19 am";
    break;
  case 3:
    result = "12:47 pm";
    break;
  case 4:
    result = "2:00 pm";
    break;
  case 5:
    result = "3:45 pm";
    break;
  case 6:
    result = "7:00 pm";
    break;
  case 7:
    result = "9:45 pm";
    break;
  }

  return result;
}

char *index_to_arrival(int index) {
  char * result = "";
  
  switch(index) {
  case 0:
    result = "10:16 am";
    break;
  case 1:
    result = "11:52 am";
    break;
  case 2:
    result = "1:31 pm";
    break;
  case 3:
    result = "3:00 pm";
    break;
  case 4:
    result = "4:08 pm";
    break;
  case 5:
    result = "5:55 pm";
    break;
  case 6:
    result = "9:20 pm";
    break;
  case 7:
    result = "11:58 pm";
    break;
  }

  return result;
}

int main(void) {
  int hours, minutes, minutes_since_midnight, closest_index;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  minutes_since_midnight = convert_to_minutes(hours, minutes);

  closest_index = get_closest_index(minutes_since_midnight);
  printf("Closest departure time is %s, arriving at %s\n",
	 index_to_depature(closest_index),
	 index_to_arrival(closest_index));
  
  return EXIT_SUCCESS;
}
