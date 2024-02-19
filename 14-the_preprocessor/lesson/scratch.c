#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define TEST(condition, ...) ((condition) ? \
			      printf("Passed test: %s\n", #condition) : \
			      printf(__VA_ARGS__ "\n"))

#define FUNCTION_CALLED() printf("%s called\n", __func__);
#define FUNCTION_RETURNS() printf("%s returns\n", __func__);

#define DEBUG 0

#pragma data(heap_size => 1000, stack_size => 2000)

void f(void) {
  FUNCTION_CALLED();		/* displays "f called" */
  FUNCTION_RETURNS();		/* displays "f returns" */
}

int main(void) {
  printf("Wacky Windows (c) 2010 Wacky Software, Inc.\n");
  printf("Compiled on %s at %s\n", __DATE__, __TIME__);

  TEST(2, "test passed");
  TEST(0, "test did not pass");

  f();

  #if DEBUG
  printf("Inside debug statement.\n");
  #endif

#if defined(__win64__)
  printf("Is linux");
  #error "this is an error"
#endif

  printf("%d\n", __STDC__);


  return EXIT_SUCCESS;
}
