#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "stack.h"


int main(void) {
  char ch;
  int result;
  int operand1;
  int operand2;
  
  printf("Enter an RPN expression: ");
  do {
    scanf(" %c", &ch);

    /* ops */
    if (isdigit(ch)) {
      push(ch - '0');
    } else if (ch == '+') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 + operand2);
    } else if (ch == '-') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 - operand2);
    } else if (ch == '/') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 / operand2);
    } else if (ch == '*') {
      operand2 = pop();
      operand1 = pop();
      push(operand1 * operand2);
    } else if (ch == '=') {
      printf("Value of expression: %d\n", pop());
      make_empty();
      printf("Enter an RPN expression: ");
    } else {
      break;
    }
  } while(ch != '\n');
  
  return EXIT_SUCCESS;
}
