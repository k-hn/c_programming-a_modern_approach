#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{
  int *arr = create_array(10, 5);

  for (int *ptr = arr; ptr < arr + 10; ptr++) {
    printf("%d\n", *ptr);
  }
  
  free(arr);

  return EXIT_SUCCESS;
}

int *create_array(int n, int initial_value)
{
  int *result = malloc(n * sizeof(initial_value));
  if (result == NULL) {
    return NULL;
  }

  /* initialise array */
  for (int i = 0; i < n; i++) {
    result[i] = initial_value;
  }

  return result;
}
