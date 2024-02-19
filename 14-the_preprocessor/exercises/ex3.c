#include <stdio.h>
#include <stdlib.h>

#define DOUBLE(x) 2*x
#define DOUBLE2(x) (2*(x))

int main(void) {
  int result;

  /* a */
  result = DOUBLE(1+2);		/* Result: 2*1+2 -> 4 */
  printf("a) Result: %d\n", result);

  /* b */
  result = 4/DOUBLE(2);		/* Result: 4/2*2 -> 4 */
  printf("b) Result: %d\n", result);

  /* c */
  printf("DOUBLE2(1+2) = %d\n", DOUBLE2(1+2)); /* Corrected to 6 */
  printf("4/DOUBLE2(2) = %d\n", 4/DOUBLE2(2)); /* Corrected to 1 */
  
  return EXIT_SUCCESS;
}
