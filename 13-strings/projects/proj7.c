#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input, first_digit, second_digit;
  char *regular_prefixes[10] = {
    "",
    "",
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety"
  };
  char *regular_suffixes[10] = {
    "",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
  };
  char *teens[10] = {
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen"
  };
  
    
  printf("Enter a two digit number: ");
  scanf("%2d", &input);

  first_digit = input / 10;
  second_digit = input % 10;

  if (input > 0 && input < 10) {
    printf("%s\n", regular_suffixes[input]);
  } else if (input >= 10 && input < 20) {
    printf("%s\n", teens[input - 10]);
  } else {
    printf("%s%s%s\n",
	   regular_prefixes[first_digit],
	   second_digit == 0 ? "" : "-",
	   regular_suffixes[second_digit]);
  }

  return EXIT_SUCCESS;
}
