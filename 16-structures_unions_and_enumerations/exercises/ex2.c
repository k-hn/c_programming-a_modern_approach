#include <stdio.h>
#include <stdlib.h>

/* a, b */
struct {
  double real;
  double imaginary;
} c1 = {0.0, 1.0},
  c2 = {1.0, 0.0},
  c3;

int main(void)
{
  /* c */
  printf("Before: c1(%f, %f) | c2(%f, %f)\n", c1.real,
	 c1.imaginary,
	 c2.real,
	 c2.imaginary);

  c1 = c2;
  printf("Before: c1(%f, %f) | c2(%f, %f)\n", c1.real,
	 c1.imaginary,
	 c2.real,
	 c2.imaginary);

  /* d */
  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;
  printf("Before: c1(%f, %f) | c2(%f, %f) | c3(%f, %f)\n", c1.real,
	 c1.imaginary,
	 c2.real,
	 c2.imaginary,
	 c3.real,
	 c3.imaginary);
  
  return EXIT_SUCCESS;
}
