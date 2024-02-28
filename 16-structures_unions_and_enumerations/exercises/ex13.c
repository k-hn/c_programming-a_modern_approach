#include <stdio.h>
#include <stdlib.h>

#define RECTANGLE 0
#define CIRCLE 1

struct point {
  int x, y;
};

struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;

int main(void)
{
  /* a */
  s.shape_kind = RECTANGLE;	/* Legal */

  /* b */
  s.center.x = 10;		/* Legal */

  /* c */
  s.height = 25;	        /* Illegal: change to s.u.rectangle.height */

  /* d */
  s.u.rectangle.width = 8;	/* Legal */

  /* e */
  s.u.circle = 5;		/* Illegal: change to s.u.circle.radius = 5 */

  /* f */
  s.u.radius = 5;		/* Illegal: change to s.u.circle.radius = 5 */
  
  return EXIT_SUCCESS;
}
