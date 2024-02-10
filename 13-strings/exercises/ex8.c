#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *str;

  strcpy(str, "tire-bouchon");
  strcpy(&str[4], "d-or-wi");
  strcat(str, "red?");

  printf("Output: %s\n", str);	/* tired-or-wired? */
  
  return EXIT_SUCCESS;
}
