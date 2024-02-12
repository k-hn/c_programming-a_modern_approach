#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Program requires you provide arguments.\n");
    return EXIT_FAILURE;
  }

  for (int i = argc - 1; i > 0; i--) {
    printf("%s ", argv[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
