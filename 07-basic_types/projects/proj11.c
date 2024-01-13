#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  char name[100];
  bool print = false;

  printf("Enter a first and last name: ");
  fgets(name, sizeof(name), stdin);

  /* print Surname */
  for (int i = 0; name[i] != '\n'; i++) {
    if (print) {
      /* capitialise character is it follows a space */
      printf("%c", i > 0 && name[i - 1] == ' ' ? toupper(name[i]) : name[i]);
    }

    if (name[i] == ' ') {
      print = true;
    }
  }
  /* append firstname initial and dot */
  printf(", %c.\n", toupper(name[0]));
  
  return EXIT_SUCCESS;
}
