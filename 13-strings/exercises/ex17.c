#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_SIZE 100

bool test_extension(const char *file_name,
		    const char *extension);
/* void str_to_upper(const char *str); */

int main(void) {
  char file[INPUT_SIZE];
  char ext[INPUT_SIZE];
  bool result;
  
  printf("Enter filename: ");
  scanf("%s", file);

  printf("Enter extension: ");
  scanf("%s", ext);

  result = test_extension(file, ext);
  printf("Result: %d\n", result);
  
  return EXIT_SUCCESS;
}

bool test_extension(const char *file_name,
		    const char *extension) {
  char temp[10] = {'\0'};
  int file_name_len = strlen(file_name);
  int i;

  for (i = 0; i < file_name_len; i++) {
    if (file_name[i] == '.') {
      break;
    }
  }

  for (int file_count = i + 1, ext_count = 0;
       file_count < file_name_len && ext_count < strlen(extension);
       file_count++, ext_count++) {
    if (toupper(file_name[file_count]) != toupper(extension[ext_count])) {
      return false;
    }
  }

  return true;
}
