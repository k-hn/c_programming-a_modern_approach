#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input;
  int first, second, third, fourth, fifth;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &input);

  fifth = input % 8;
  fourth = input / 8 % 8;
  third = input / 8 / 8 % 8;
  second = input / 8 / 8 / 8 % 8;
  first = input / 8 / 8 / 8 /8 % 8;

  printf("In octal, your number is: %d%d%d%d%d\n",
	 first, second, third, fourth, fifth);
  
  return EXIT_SUCCESS;
}
