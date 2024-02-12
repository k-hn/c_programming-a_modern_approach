/* Checks planet names */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PLANETS 9

void str_to_lower(char *s);

int main(int argc, char *argv[]) {
  char planets[9][10] = {"Mercury", "Venus", "Earth",
		     "Mars", "Jupiter", "Saturn",
		     "Uranus", "Neptune", "Pluto"};
  int i, j;

  size_t q;

  /* Convert args and planets to lowercase */
  for (int count = 0; count < NUM_PLANETS; count++) {
    str_to_lower(planets[count]);
  }

  for (int count = 1; count < argc; count++) {
    str_to_lower(argv[count]);
  }

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (strcmp(argv[i], planets[j]) == 0) {
	printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
    }

    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }

  return EXIT_SUCCESS;
}

void str_to_lower(char s[]) {
  int len = strlen(s);

  for (int i = 0; i < len; i++) {
    s[i] = tolower(s[i]);
  }
}
