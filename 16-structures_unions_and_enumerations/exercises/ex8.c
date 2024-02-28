#include <stdio.h>
#include <stdlib.h>

struct color {
  int red;
  int green;
  int blue;
};

int main(void)
{
  /* a */
  const struct color MAGENTA = {255, 0, 255};

  /* b */
  const struct color MAGENTA2 = {
    .red = 255,
    .blue = 255
  };

  return EXIT_SUCCESS;
}
