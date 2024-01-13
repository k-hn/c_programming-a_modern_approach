#include <stdio.h>
#include <stdlib.h>

int main(void) {
  typedef char Int8;
  typedef short Int16;
  typedef int Int32;

  printf("sizeof(Int8): %zu\n", sizeof(Int8));
  printf("sizeof(Int16): %zu\n", sizeof(Int16));
  printf("sizeof(Int32): %zu\n", sizeof(Int32));
  
  return EXIT_SUCCESS;
}
