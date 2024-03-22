#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_malloc(int n);

int main(void)
{
  char *my_ptr = my_malloc(5);
  free(my_ptr);
  
  return EXIT_SUCCESS;
}

void *my_malloc(int n)
{
  void *ptr;
  ptr = malloc(n);
  if (ptr == NULL) {
    printf("Error allocating %d bytes in my_malloc.\n", n);
    exit(EXIT_FAILURE);
  }

  return ptr;
}
