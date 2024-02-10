#include <stdio.h>
#include <stdlib.h>

void remove_filename(char *url);

int main(void) {
  char input[100];

  printf("Enter URL: ");
  scanf("%s", input);

  remove_filename(input);

  printf("Result: %s\n", input);
  
  return EXIT_SUCCESS;
}

void remove_filename(char *url) {
  int end_index;
  char *ptr_url = url;
  
  while (*ptr_url) {
    ptr_url++;
  }
  end_index = ptr_url - url;

  while (*ptr_url != '/') {
    ptr_url--;
  }

  *ptr_url = '\0';
}
