#include <stdio.h>
#include <stdlib.h>

struct point{
  int x, y;
};

struct rectangle {
  struct point upper_left, lower_right;
};

struct rectangle *p;

int main(void)
{
  struct rectangle *rect = malloc(sizeof(struct rectangle));
  if (rect == NULL) {
    printf("memory allocation for rect failed.\n");
    exit(EXIT_FAILURE);
  }
  
  rect->lower_right.x = 20;
  rect->lower_right.y = 15;
  rect->upper_left.x = 10;
  rect->upper_left.y = 25;

  free(rect);
  
  return EXIT_SUCCESS;
}
