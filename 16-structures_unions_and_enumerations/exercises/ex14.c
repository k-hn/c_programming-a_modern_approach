#include <stdio.h>
#include <stdlib.h>

#define RECTANGLE 0
#define CIRCLE 1

#define PI 3.14159265359

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
};

/* a */
/**
 * area: Returns the area of the shape.
 *       struct shape s -> int
 */
int area(struct shape s);

/* b */
/**
 * move: Moves the shape x units horizontally and y units vertically.
 *       struct shape s -> int x -> int y -> struct shape
 */
struct shape move(struct shape s, int x, int y);

/* c */
/**
 * scale: Scale s by a factor of c, returning the modified shape s.
 *        struct shape s -> double c -> struct shape
 */
struct shape scale(struct shape s, double c);

int main(void)
{
  struct shape s = {
    .shape_kind = CIRCLE,
    .center = {
      .x = 5,
      .y = 5,
    },
    .u = {
      .circle = {
	.radius = 20
      }
    }
  };

  printf("Area of s: %d\n", area(s));

  struct shape moved_s = move(s, 2, 3);
  printf("new_s center: %d, %d\n", moved_s.center.x, moved_s.center.y);

  struct shape scaled_s = scale(s, 5);
  printf("scaled_s radius: %d\n", scaled_s.u.circle.radius);
  
  return EXIT_SUCCESS;
}

int area(struct shape s)
{
  if (s.shape_kind == RECTANGLE) {
    return s.u.rectangle.height * s.u.rectangle.width;
  } else {
    return PI * s.u.circle.radius * s.u.circle.radius; 
  }
}

struct shape move(struct shape s, int x, int y)
{
  s.center.x += x;
  s.center.y += y;

  return s;
}

struct shape scale(struct shape s, double c)
{
  if (s.shape_kind == RECTANGLE) {
    s.u.rectangle.height *= c;
    s.u.rectangle.width *= c;
  } else {
    s.u.circle.radius *= c;
  }

  return s;
}
