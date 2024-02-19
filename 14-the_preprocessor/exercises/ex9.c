#include <stdio.h>
#include <stdlib.h>

#define CHECK(x,y,n) ((y) >= 0 && (y) <= (n - 1) && (x) >= 0 && (x) <= (n - 1))
#define MEDIAN(x, y, z) ((x)>=(y) && (x)<=(z) ? (x) : (y)>=(x) && (y)<=(z) ? (y) : (z))
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + \
		       2*(x)*(x)*(x)*(x) -     \
		       5*(x)*(x)*(x) -	       \
		       (x)*(x) +	       \
		       7*(x) -		       \
		       6)

int main(void) {
  printf("CHECK(3,4,9): %d\n", CHECK(3, 4, 5));
  printf("MEDIAN(1, 0, 8): %d\n", MEDIAN(1, 0, 8));
  printf("POLYNOMIAL(3): %d\n", POLYNOMIAL(3));
  
  return EXIT_SUCCESS;
}
