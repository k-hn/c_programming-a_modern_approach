#include <stdio.h>
#include <stdlib.h>

int get_gcd(int m, int n);

void reduce(int numerator, int denominator,
	    int *reduced_numerator, int *reduced_denominator);

int main(void) {
  int num, denom, gcd;
  int reduced_num, reduced_denom;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  reduce(num, denom, &reduced_num, &reduced_denom);
  
  printf("%d/%d\n", reduced_num, reduced_denom);    

  return EXIT_SUCCESS;
}

int get_gcd(int m, int n) {
  if (n == 0) {
    return m;
  } else {
    return get_gcd(n, m % n);
  }
}

void reduce(int numerator, int denominator,
	    int *reduced_numerator, int *reduced_denominator) {
  int gcd = get_gcd(numerator, denominator);

  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}

