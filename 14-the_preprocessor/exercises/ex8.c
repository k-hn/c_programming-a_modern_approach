#include <stdio.h>
#include <stdlib.h>

#define TO_STRING(x) #x
#define EXPAND(in) TO_STRING(in)
#define LINE_FILE ("Line " EXPAND(__LINE__) " of file " __FILE__)

int main(void) {
  printf("line %d\n", __LINE__);
  printf("file: %s\n", __FILE__);

  printf("%s\n", LINE_FILE);
  return EXIT_SUCCESS;
}
