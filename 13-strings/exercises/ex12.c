#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
  char file[100] = "memo";
  char ext[100];

  get_extension(file, ext);

  printf("Extension: %s\n", ext);

  return EXIT_SUCCESS;
}

void get_extension(const char *file_name, char *extension) {
  int len = strlen(file_name);
  int i;
  
  for (i = 0; i < len; i++) {
    if (file_name[i] == '.') {
      strcpy(extension, &file_name[i + 1]);
      break;
    }
  }

  strcpy(extension, "");
}
