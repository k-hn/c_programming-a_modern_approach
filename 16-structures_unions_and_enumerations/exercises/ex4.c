#include <stdio.h>
#include <stdlib.h>

/* a */
typedef struct {
  double real;
  double imaginary;
} Complex;

Complex make_complex(double real, double imaginary);
Complex add_complex(Complex c1, Complex c2);

void print_complex(Complex c);

int main(void)
{
  /* b */
  Complex c1;
  Complex c2;
  Complex c3;

  c1 = make_complex(2, 4);
  c2 = make_complex(1, 3);
  print_complex(c1);
  print_complex(c2);

  print_complex(add_complex(c1, c2));
  
  return EXIT_SUCCESS;
}

/* c */
Complex make_complex(double real, double imaginary)
{
  return (Complex) {.real = real, .imaginary = imaginary};
}

/* d */
Complex add_complex(Complex c1, Complex c2)
{
  return (Complex) {
    .real = c1.real + c2.real,
    .imaginary = c1.imaginary + c2.imaginary
  };
}

void print_complex(Complex c)
{
  printf("{real: %.2f, complex: %.2f}\n", c.real, c.imaginary);
}
