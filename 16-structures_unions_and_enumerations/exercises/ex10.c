#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {
  int x, y;
};

struct rectangle {
  struct point upper_left, lower_right;
};

/* a */
/**
 * area: Returns the area of the rectangle.
 *       struct rectangle r -> int
 */
int area(struct rectangle r);


/* b */
/**
 * center: Returns the center of the input rectangle as a point struct.
 *         struct rectangle r -> struct point
 */
struct point center(struct rectangle r);


/* c */
/**
 * move: Move rectangle horizontally by x units and vertically by y units.
 *       struct rectange r -> int x -> int y -> struct rectangle
 */
struct rectangle move(struct rectangle r, int x, int y);


/* d */
/**
 * within: Returns true if point p lies within rectangle r; returns false otherwise.
 *         struct rectangle r -> struct point p -> bool
 */
bool within(struct rectangle r, struct point p);

int main(void)
{
  struct rectangle my_rect = {
    .upper_left = {
      .x = 2,
      .y = 5
    },
    .lower_right = {
      .x = 6,
      .y = 21
    }
  };

  printf("Area: %d\n", area(my_rect));

  struct point my_rect_center = center(my_rect);
  printf("Center: Point(x: %d, y: %d)\n", my_rect_center.x, my_rect_center.y);

  struct rectangle my_moved_rect = move(my_rect, 2, 4);
  printf("Rectangle( Point(%d, %d), Point(%d, %d) )",
	 my_moved_rect.upper_left.x,
	 my_moved_rect.upper_left.y,
	 my_moved_rect.lower_right.x,
	 my_moved_rect.lower_right.y);

  struct point random_point1 = {4, 20};
  struct point random_point2 = {7, 20};
  printf("Point(%d, %d) within my_rect: %d\n",
	 random_point1.x, random_point1.y, within(my_rect, random_point1));
  printf("Point(%d, %d) within my_rect: %d\n",
	 random_point2.x, random_point2.y, within(my_rect, random_point2));
  
  return EXIT_SUCCESS;
}

int area(struct rectangle r)
{
  int width = r.lower_right.x - r.upper_left.x;
  int height = r.lower_right.y - r.upper_left.y;

  return height * width;
}

struct point center(struct rectangle r)
{
  struct point result;
  result.x = (r.lower_right.x + r.upper_left.x) / 2;
  result.y = (r.lower_right.y + r.upper_left.y) / 2;

  return result;
}

struct rectangle move(struct rectangle r, int x, int y)
{
  return (struct rectangle) {
    .upper_left = {
      .x = r.upper_left.x + x,
      .y = r.upper_left.y + y
    },
    .lower_right = {
      .x = r.lower_right.x + x,
      .y = r.lower_right.y + y
    }
  };
}

bool within(struct rectangle r, struct point p)
{
  bool is_within_horizontal = p.x > r.upper_left.x && p.x < r.lower_right.x;
  bool is_within_vertical = p.y > r.upper_left.y && p.y < r.lower_right.y;

  return is_within_horizontal && is_within_vertical;
}
