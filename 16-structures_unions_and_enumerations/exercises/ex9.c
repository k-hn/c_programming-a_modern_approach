#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct color {
  int red;
  int green;
  int blue;
};

/**
 * print_color: Prints the struct color.
 *              struct color c -> ()
 */
void print_color(struct color c);

/* a */
/**
 * make_color: Returns a color structure containing the specified
 *             red, green, and blue values.
 *             int red -> int green -> int blue -> struct color
 */
struct color make_color(int red, int green, int blue);

/**
 * keep_within_bounds: Ensures that color is within the range 0 - 255.
 *                     int color -> int
 */
int keep_within_bounds(int color);


/* b */
/**
 * getRed: Returns the value of color struct's red component.
 *         struct color c -> int
 */
int getRed(struct color c);


/* c */
/**
 * equal_color: Returns true if the correspoinding members of color1 and color2 are equal.
 *              struct color color1 -> struct color color2 -> bool
 */
bool equal_color(struct color color1, struct color color2);


/* d */
/**
 * brighter: Returns a color structure that represenets a brighter
 *                 version of the input color structure.
 *                 struct color c -> struct color
 */
struct color brighter(struct color c);


/* e */
/**
 * darker: Returns a color structure that represents a darker version of the color c.
 *         struct color c -> struct color
 */
struct color darker(struct color c);

int main(void)
{
  struct color my_color1 = make_color(-2, 4, 256);
  struct color my_color2 = make_color(-2, 4, 256);
  print_color(my_color1);

  printf("Red component: %d\n", getRed(my_color1));

  printf("color1 == color2: %d\n", equal_color(my_color1, my_color2));

  printf("my_color1 brighter: ");
  print_color(brighter(my_color1));

  printf("my_color1 darker: ");
  print_color(darker(my_color1));
  
  return EXIT_SUCCESS;
}

void print_color(struct color c)
{
  printf("Color{red: %d, green: %d, blue: %d}\n", c.red, c.green, c.blue);
}

int keep_within_bounds(int color)
{
  int result;
  
  if (color < 0) {
    result = 0;
  } else if (color > 255) {
    result = 255;
  } else {
    result = color;
  }

  return result;
}

struct color make_color(int red, int green, int blue)
{
  struct color result = {
    .red = keep_within_bounds(red),
    .green = keep_within_bounds(green),
    .blue = keep_within_bounds(blue)
  };

  return result;
}

int getRed(struct color c)
{
  return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
  return color1.red == color2.red &&
    color1.green == color2.green &&
    color1.blue == color2.blue;
}

struct color brighter(struct color c)
{
  struct color result;
  
  if (c.red == 0 && c.green == 0 && c.blue == 0) {
    result.red = 3;
    result.green = 3;
    result.blue = 3;
    return result;
  }

  int old_red = c.red > 0 && c.red < 3 ? 3 : c.red;
  int old_green = c.green > 0 && c.green < 3 ? 3 : c.green;
  int old_blue = c.blue > 0 && c.blue < 3 ? 3 : c.blue;

  int new_red = keep_within_bounds(old_red / 0.7);
  int new_green = keep_within_bounds(old_green / 0.7);
  int new_blue = keep_within_bounds(old_blue / 0.7);
  
  result.red = new_red;
  result.green = new_green;
  result.blue = new_blue;
  
  return result;
}

struct color darker(struct color c)
{
  struct color result;
  result.red = keep_within_bounds(c.red * 0.7);
  result.green = keep_within_bounds(c.green * 0.7);
  result.blue = keep_within_bounds(c.blue * 0.7);

  return result;
  
}
