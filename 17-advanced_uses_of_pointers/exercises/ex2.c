#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str);

int main(void)
{
  char *input;
  printf("Enter string: ");
  scanf("%s", input);
  
  char *p = duplicate(input);
  printf("Duplicated string: %s\n", p);
  free(p);
  
  return EXIT_SUCCESS;
}

char *duplicate(char *str)
{
  char *result = malloc(strlen(str) + 1);
  if (result == NULL) {
    return NULL;
  }

  strcpy(result, str);
  return result;
}
