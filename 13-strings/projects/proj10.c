#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define INPUT_SIZE 100

void reverse_name(char *name);
void read_line(char *str, int n);

int main(void) {
  char name[INPUT_SIZE];
  bool print = false;

  printf("Enter a first and last name: ");
  read_line(name, INPUT_SIZE);
  
  reverse_name(name);
  printf("%s\n", name);
  
  return EXIT_SUCCESS;
}

void read_line(char *str, int n) {
  int i;
  char ch;
  for (i = 0; (ch = getchar()) != '\n' && ch != EOF && i < INPUT_SIZE; i++) {
    str[i] = ch;
  }
  str[i] = '\0';
}

void reverse_name(char *name) {
  char temp[INPUT_SIZE];
  strcpy(temp, name);
  char firstname_initial;

  /* Get firstname initial */
  int i; 
  for (i = 0; i < strlen(name); i++) {
    if (temp[i] != ' ') {
      firstname_initial = temp[i];
      break;
    }
  }

  /* Determine start of surname */
  int j;
  for (j = i; j < strlen(name); j++) {
    if (temp[j] == ' ' && temp[j + 1] != ' ') {
      break;
    }
  }
  
  strncpy(name, &name[j + 1], INPUT_SIZE - 1);
  name[0] = toupper(name[0]);
  sprintf(temp, ", %c.", toupper(firstname_initial));
  strncat(name, temp, INPUT_SIZE - 1);
}
