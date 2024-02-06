#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("First method: \n");
  for (int i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  printf("\n\nSecond method: \n");
  /* char **p; */
  for (char **p = &argv[1]; *p != NULL; p++) {
    printf("%s\n", *p);
  }

  return EXIT_SUCCESS;
}
