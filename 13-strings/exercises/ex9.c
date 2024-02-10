#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s1[50], s2[50];

  strcpy(s1, "computer");
  strcpy(s2, "science");
  if (strcmp(s1, s2) < 0) {
    strcat(s1, s2);
  } else {
    strcat(s2, s1);
  }

  s1[strlen(s1) - 6] = '\0';

  printf("s1: %s\n", s1);

  return EXIT_SUCCESS;
}
