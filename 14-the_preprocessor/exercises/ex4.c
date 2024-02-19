#include <stdio.h>
#include <stdlib.h>

/* a */
/* Problems */
/* AVG(3,7) -> 6 instead of 5. x+y needs to be put in parentheses */
/* For additional safety parameters should also be put in parentheses */
#define AVG(x,y) (x+y/2)
#define AVG2(x,y) (((x) + (y))/2)

/* b */
/* 12/AREA(3,7) -> 28 whereas it should be 0. (x) * (y) need to be enclosed in parentheses */
#define AREA(x,y) (x) * (y)
#define AREA2(x,y) ((x) * (y))

int main(void) {
  printf("AVG(3,7): %d | AVG2(3,7): %d\n", AVG(3,7), AVG2(3,7));
  printf("12/AREA(3,7): %d | 12/AREA2(3,7): %d\n", 12/AREA(3,7), 12/AREA2(3,7));
  return EXIT_SUCCESS;
}
