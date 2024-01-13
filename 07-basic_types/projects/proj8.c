#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convert_to_minutes(int hours, int minutes) {
  return hours * 60 + minutes;
}

int get_closest_index(int minutes) {
  /* start point */
  int closest_depature_index = 0;
  int difference = abs(convert_to_minutes(8, 0) - minutes);

  /* 9:43 am */
  if (abs(convert_to_minutes(9, 43) - minutes) < difference) {
    closest_depature_index = 1;
    difference = abs(convert_to_minutes(9, 43) - minutes);
  }

  /* 11:19 am */
  if (abs(convert_to_minutes(11, 19) - minutes) < difference) {
    closest_depature_index = 2;
    difference = abs(convert_to_minutes(11, 19) - minutes);
  }

  /* 12:47 pm */
  if (abs(convert_to_minutes(12, 47) - minutes) < difference) {
    closest_depature_index = 3;
    difference = abs(convert_to_minutes(12, 47) - minutes);
  }

  /* 2:00 pm */
  if (abs(convert_to_minutes(14, 00) - minutes) < difference) {
    closest_depature_index = 4;
    difference = abs(convert_to_minutes(14, 00) - minutes);
  }

  /* 3:45 pm */
  if (abs(convert_to_minutes(15, 45) - minutes) < difference) {
    closest_depature_index = 5;
    difference = abs(convert_to_minutes(15, 45) - minutes);
  }

  /* 7:00 pm */
  if (abs(convert_to_minutes(19, 00) - minutes) < difference) {
    closest_depature_index = 6;
    difference = abs(convert_to_minutes(19, 00) - minutes);
  }

  /* 9:45 pm */
  if (abs(convert_to_minutes(21, 45) - minutes) < difference) {
    closest_depature_index = 7;
    difference = abs(convert_to_minutes(21, 45) - minutes);
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

int meridiem_hour_to_24hr(int hours, char meridiem) {
  printf("inside said function");
  if (meridiem == 'p' || meridiem == 'P') {
    if (hours == 12) {
      return hours;
    } else {
      return hours + 12;
    }
  } else {
    if (hours == 12) {
      return 0;
    } else {
      return hours;
    }
  }
}

int main(void) {
  int hours, minutes, minutes_since_midnight, closest_index;
  char meridiem;
  
  printf("Enter time (1:15PM): ");
  scanf("%d:%d%c", &hours, &minutes, &meridiem);

  minutes_since_midnight = convert_to_minutes(meridiem_hour_to_24hr(hours, meridiem), minutes);

  closest_index = get_closest_index(minutes_since_midnight);
  printf("Closest departure time is %s, arriving at %s\n",
	 index_to_depature(closest_index),
	 index_to_arrival(closest_index));
  
  return EXIT_SUCCESS;
}
