/* a: 3 */
/* b: 0 */
/* c: Returns the index(in s) of the first character(in s) not found in t */

#include <stdio.h>
#include <stdlib.h>
int f(char *s, char *t) {
  char *p1, *p2;

  for (p1 = s; *p1; p1++) {
    for (p2 = t; *p2; p2++) {
      if (*p1 == *p2) {
	break;
      }
    }

    if (*p2 == '\0') {
      break;
    }
  }

  return p1 - s;
}

int main(void) {
  char input1[100];
  char input2[100];
  char ch;

  printf("Enter first word: ");
  for (int i = 0; (ch = getchar()) != '\n' && ch != EOF; i++) {
    input1[i] = ch;
  }

  printf("Enter second word: ");
  for (int i = 0; (ch = getchar()) != '\n' && ch != EOF; i++) {
    input2[i] = ch;
  }

  printf("Result: %d\n", f(input1, input2));

  return EXIT_SUCCESS;
}
