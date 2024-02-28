#include <stdio.h>
#include <stdlib.h>

/* a */
struct complex {
  double real;
  double imaginary;
};

struct complex make_complex(double real, double imaginary);
struct complex add_complex(struct complex c1, struct complex c2);

void print_complex(struct complex c);

int main(void)
{
  /* b */
  struct complex c1;
  struct complex c2;
  struct complex c3;

  c1 = make_complex(2, 4);
  c2 = make_complex(1, 3);
  print_complex(c1);
  print_complex(c2);

  print_complex(add_complex(c1, c2));
  
  return EXIT_SUCCESS;
}

/* c */
struct complex make_complex(double real, double imaginary)
{
  return (struct complex) {.real = real, .imaginary = imaginary};
}

/* d */
struct complex add_complex(struct complex c1, struct complex c2)
{
  return (struct complex) {
    .real = c1.real + c2.real,
    .imaginary = c1.imaginary + c2.imaginary
  };
}

void print_complex(struct complex c)
{
  printf("{real: %.2f, complex: %.2f}\n", c.real, c.imaginary);
}
