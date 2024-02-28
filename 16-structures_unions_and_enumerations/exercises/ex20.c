#include <stdio.h>
#include <stdlib.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
  int x = 0, y = 0;

  direction = SOUTH;
  switch (direction) {
  case EAST:
    x++;
    break;
  case WEST:
    x--;
    break;
  case SOUTH:
    y++;
    break;
  case NORTH:
    y--;
    break;
  }

  printf("x: %d\n", x);
  printf("y: %d\n", y);

  return EXIT_SUCCESS;
}
