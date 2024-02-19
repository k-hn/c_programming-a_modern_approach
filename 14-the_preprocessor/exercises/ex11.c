#include <stdio.h>
#include <stdlib.h>

#define ERROR(format, ...) (fprintf(stderr, format, __VA_ARGS__))

int main(void) {
  ERROR("Range error: index = %d\n", 23);
  
  return EXIT_SUCCESS;
}
