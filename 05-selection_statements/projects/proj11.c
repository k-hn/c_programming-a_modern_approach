#include <stdio.h>
#include <stdlib.h>

char *get_regular_prefix(int num) {
  char *prefix = "";
  
  switch(num) {
  case 2:
    prefix = "twenty";
    break;
  case 3:
    prefix = "thirty";
    break;
  case 4:
    prefix = "forty";
    break;
  case 5:
    prefix = "fifty";
    break;
  case 6:
    prefix = "sixty";
    break;
  case 7:
    prefix = "seventy";
    break;
  case 8:
    prefix = "eighty";
    break;
  case 9:
    prefix = "ninety";
    break;
  default:
    prefix = "";
    break;
  }

  return prefix;
}

char *get_regular_suffix(int num) {
  char *suffix = "";
  switch(num) {
  case 1:
    suffix = "one";
    break;
  case 2:
    suffix = "two";
    break;
  case 3:
    suffix = "three";
    break;
  case 4:
    suffix = "four";
    break;
  case 5:
    suffix = "five";
    break;
  case 6:
    suffix = "six";
    break;
  case 7:
    suffix = "seven";
    break;
  case 8:
    suffix = "eight";
    break;
  case 9:
    suffix = "nine";
    break;
  default:
    suffix = "";
    break;
  }

  return suffix;
}

char *get_teens(int num) {
  char *result = "";

  switch(num) {
  case 10:
    result = "ten";
    break;
  case 11:
    result = "eleven";
    break;
  case 12:
    result = "twelve";
    break;
  case 13:
    result = "thirteen";
    break;
  case 14:
    result = "fourteen";
    break;
  case 15:
    result = "fifteen";
    break;
  case 16:
    result = "sixteen";
    break;
  case 17:
    result = "seventeen";
    break;
  case 18:
    result = "eighteen";
    break;
  case 19:
    result = "nineteen";
    break;
  }
}

int main(void) {
  int input, first_digit, second_digit;

  printf("Enter a two digit number: ");
  scanf("%2d", &input);

  first_digit = input / 10;
  second_digit = input % 10;

  if (input > 0 && input < 10) {
    printf("%s\n", get_regular_suffix(input));
  } else if (input >= 10 && input < 20) {
    printf("%s\n", get_teens(input));
  } else {
    printf("%s%s%s\n",
	   get_regular_prefix(first_digit),
	   second_digit == 0 ? "" : "-",
	   get_regular_suffix(second_digit));
  }

  return EXIT_SUCCESS;
}
