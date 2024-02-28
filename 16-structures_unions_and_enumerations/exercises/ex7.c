#include <stdio.h>
#include <stdlib.h>

struct fraction {
  int numerator;
  int denominator;
};

/* a */
int get_gcd_helper(int m, int n);
int get_gcd(struct fraction f);
struct fraction reduce(struct fraction f);

/* b */
struct fraction add(struct fraction f1, struct fraction f2);

/* c */
struct fraction subtract(struct fraction f1, struct fraction f2);

/* d */
struct fraction multiply(struct fraction f1, struct fraction f2);

/* e */
struct fraction divide(struct fraction f1, struct fraction f2);

int main(void)
{
  struct fraction f1;
  struct fraction f2;
  printf("Enter fraction 1(n/d): ");
  scanf("%d/%d", &f1.numerator, &f1.denominator);
  printf("Enter fraction 2(n/d): ");
  scanf("%d/%d", &f2.numerator, &f2.denominator);

  struct fraction reduced = reduce(f1);
  printf("Reduced fraction: %d/%d\n", reduced.numerator, reduced.denominator);

  struct fraction sum = add(f1, f2);
  printf("Sum of f1 and f2: %d/%d\n", sum.numerator, sum.denominator);

  struct fraction difference = subtract(f1, f2);
  printf("Difference of f1 and f2: %d/%d\n",
	 difference.numerator, difference.denominator);

  struct fraction product = multiply(f1, f2);
  printf("Product of f1 and f2: %d/%d\n", product.numerator, product.denominator);

  struct fraction quotient = divide(f1, f2);
  printf("Product of f1 and f2: %d/%d\n", quotient.numerator, quotient.denominator);

  return EXIT_SUCCESS;
}

/**
 * get_gcd_helper: Calculates the Greatest Common Denominator(GCD) of
 *                 m and n.
 *                 int m -> int n -> int
 */
int get_gcd_helper(int m, int n) {
  if (n == 0) {
    return m;
  } else {
    return get_gcd_helper(n, m % n);
  }
}

/**
 * get_gcd: Calculates the Greatest Common Denominator(GCD) of f
 *          by calling its helper function `get_gcd_helper`.
 *          struct fraction f -> int
 */
int get_gcd(struct fraction f) {
  return get_gcd_helper(f.numerator, f.denominator);
}

/**
 * reduce: Reduces fraction f to its lowest terms and returns a fraction struct.
 *         struct fraction f -> struct fraction
 */
struct fraction reduce(struct fraction f)
{
  int gcd = get_gcd(f);
  return (struct fraction) {
    .numerator = f.numerator / gcd,
    .denominator = f.denominator / gcd
  };
}

/**
 * add: Adds fractions f1 and f2 and returns the result as a fractioni struct.
 *      struction fraction.
 *      f1 -> struct fraction f2 -> struct fraction
 */
struct fraction add(struct fraction f1, struct fraction f2)
{
  struct fraction result;
  result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
  result.denominator = f1.denominator * f2.denominator;

  return reduce(result);
}

/**
 * subtract: Subtracts fraction f2 from f1 and returns the result as
 *           a fraction struct.
 *           struct fraction f1 -> struct fraction f2 -> struct fraction 
 */
struct fraction subtract(struct fraction f1, struct fraction f2)
{
  struct fraction result;
  result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
  result.denominator = f1.denominator * f2.denominator;

  return reduce(result);
}

/**
 * multiply: Multiplies fractions f1 and f2 and returns the resulting
 *           fraction.
 *           struct fraction f1 -> struct fraction f2 -> struct fraction
 */
struct fraction multiply(struct fraction f1, struct fraction f2)
{
  struct fraction result;
  result.numerator = f1.numerator * f2.numerator;
  result.denominator = f1.denominator * f2.denominator;

  return reduce(result);
}

/**
 * divide: Divides fractions f1 and f2 and returns and resulting fraction.
 *         struct fraction.
 *         f1 -> struct fraction f2 -> struct fraction
 */
struct fraction divide(struct fraction f1, struct fraction f2)
{
  struct fraction result;
  result.numerator = f1.numerator * f2.denominator;
  result.denominator = f1.denominator * f2.numerator;

  return reduce(result);
}
