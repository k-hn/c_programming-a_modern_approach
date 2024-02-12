/* Prints a one-month reminder list */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50 		/* maximum number of reminders */
#define MSG_LEN 60		/* max length of reminder message */

int read_line(char str[], int n);

int main(void) {
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[15], msg_str[MSG_LEN + 1];
  int day, month, i, j, num_remind = 0;
  int time_hrs, time_minutes;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day(format: month/day), time(format: 24hrs), and reminder or 0/0 to quit: ");
    scanf("%2d/%2d", &month, &day);
    if (day == 0) {
      break;
    } else if (day < 0 || day > 31) {
      printf("Day  must be in the range 1 - 31.\n");
      continue;
    }

    scanf("%d:%d", &time_hrs, &time_minutes);
    sprintf(day_str, "%2.2d/%2.2d\t%2.2d:%2.2d\t", month, day, time_hrs, time_minutes);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++) {
      if (strcmp(day_str, reminders[i]) < 0) {
	break;
      }
    }

    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j-1]);
    }

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay\tTime\t Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf("%s\n", reminders[i]);
  }

  return EXIT_SUCCESS;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n') {
    if (i < n) {
      str[i++] = ch;
    }   
  }

  str[i] = '\0';
  return i;
}
