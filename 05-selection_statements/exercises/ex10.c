#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;

  switch(i % 3) {
  case 0: printf("zero");
  case 1: printf("one");
  case 2: printf("two");
  }

  printf("\n");
  /* Output: onetwo */

  return EXIT_SUCCESS;
}
