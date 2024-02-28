#include <stdio.h>
#include <stdlib.h>

struct temp{
  double a;
  union {
    char b[4];
    double c;
    int d;
  } e;
  char f[4];
} s;

int main(void) {
  printf("sizeof(temp): %ld\n", sizeof(struct temp));
  
  return EXIT_SUCCESS;
}
