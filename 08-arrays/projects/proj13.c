#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  char name[100];
  bool print = false;
  char last_name[20];
  char first_name;

  printf("Enter a first and last name: ");
  /* fgets(name, sizeof(name), stdin); */
  first_name = getchar();
  while (getchar() != ' ') {}
  scanf("%s", last_name);

  /* capitalise last name */
  last_name[0] = toupper(last_name[0]);
  printf("You entered the name: %s, %c.\n", last_name, toupper(first_name));
  
  return EXIT_SUCCESS;
}
