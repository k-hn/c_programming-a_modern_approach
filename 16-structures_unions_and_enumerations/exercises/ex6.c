#include <stdio.h>
#include <stdlib.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time split_time(long total_seconds);
void print_time(struct time t);

int main(void)
{
  long seconds;
  struct time time_split;
  printf("Enter seconds: ");
  scanf("%ld", &seconds);

  time_split = split_time(seconds);
  print_time(time_split);
  
  return EXIT_SUCCESS;
}

struct time split_time(long total_seconds)
{
  int hours = total_seconds / (60 * 60);
  int minutes = (total_seconds % (60 * 60)) / 60;
  int seconds = total_seconds % (60 * 60) % 60;

  return (struct time) {
    .hours = hours % 24,
    .minutes = minutes,
    .seconds = seconds
  };
}

void print_time(struct time t)
{
  printf("{\n  hours: %d,\n  minutes: %d,\n  seconds: %d\n}\n",
	 t.hours, t.minutes, t.seconds);
}
