#include <stdio.h>
#include <stdlib.h>

typedef struct {
  enum {INT_KIND, DOUBLE_KIND} kind;
  union {
    int i;
    double d;
  } u;
} Number;

struct {
  int a;
  char b;
}s;

void print_number(Number n);

int main(void)
{
  printf("Hello there.\n");

  Number sample_num = {DOUBLE_KIND, {.d = 45.5}};
  print_number(sample_num);

  printf("Size of s: %ld\n", sizeof(s));
  printf("Size of int: %ld\n", sizeof(int));
  printf("Size of char: %ld\n", sizeof(char));
  return EXIT_SUCCESS;
}

void print_number(Number n)
{
  if (n.kind == INT_KIND) {
    printf("%d\n", n.u.i);
  } else {
    printf("%g\n", n.u.d);
  }
}
