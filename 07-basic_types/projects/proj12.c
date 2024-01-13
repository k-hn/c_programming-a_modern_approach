#include <stdio.h>
#include <stdlib.h>

float do_op(char symbol, float operand1, float operand2) {
  switch(symbol) {
  case '+':
    return operand1 + operand2;
  case '-':
    return operand1 - operand2;
  case '*':
    return operand1 * operand2;
  case '/':
    return operand2 == 0 ? 0 : operand1 / operand2;
  }
}

int main(void) {
  char expr_str[100];
  float num1, num2, num3, result;
  char symbol1, symbol2;
  
  printf("Enter an expression: ");
  scanf("%f%c%f%c%f",
	&num1, &symbol1, &num2, &symbol2, &num3);
  
  result = do_op(symbol2, do_op(symbol1, num1, num2), num3);
  printf("Value of expression: %.1f\n", result);
  
  return EXIT_SUCCESS;
}
