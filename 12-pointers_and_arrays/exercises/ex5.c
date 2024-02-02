#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int a[5] = {11, 12, 13, 14, 15};
  int *p = a;
  bool result;

  /* a */
  /* Fails because cannot compare pointer with int value */
  /* result = p == a[0]; */
  /* printf("p == a[0]: %d\n", result); */

  /* b */
  result = p == &a[0];		/* True */
  printf("p == &a[0]: %d\n", p == &a[0]);

  /* c */
  result = *p == a[0];		/* True */
  printf("*p = a[0]: %d\n", *p == a[0]);

  /* d */
  result = p[0] == a[0];	/* True */
  printf("p[0] == a[0]: %d\n", p[0] == a[0]);
  
  return EXIT_SUCCESS;
}
