#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* a */
#define DISP(f,x) (printf(#f "(%g) = %g\n", (x), (f(x))))

/* b */
#define DISP2(f,x,y) (printf(#f "(%g,%g) = %g\n", (x), (y), (f((x), (y)))))

int main(void) {
  DISP(sqrt, 3.0);
  DISP2(pow, 1.0 + 1.0, 1.5 + 1.5);
  
  return EXIT_SUCCESS;
}
