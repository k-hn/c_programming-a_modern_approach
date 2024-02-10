#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[5] = "hey";
  // strcat(str, "");
  strcpy(str, "");
  
  puts(str);
  return EXIT_SUCCESS;
}
