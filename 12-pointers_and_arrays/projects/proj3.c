#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 100

int main(void) {
  char str[STR_SIZE];
  char ch;
  char *ptr_str;
  
  printf("Enter a message: ");
  for (ptr_str = str; ptr_str < str + STR_SIZE && (ch = getchar()) != '\n'; ptr_str++) {
    *ptr_str = ch;
  }

  printf("Reversal is: ");
  for (; ptr_str >= str; ptr_str--) {
    printf("%c", *ptr_str);
  }
  printf("\n");

  
  return EXIT_SUCCESS;
}
