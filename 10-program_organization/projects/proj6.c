#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow();
void stack_underflow();

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

void make_empty(void) {
  top = 0;
}

bool is_empty(void) {
  return top == 0;
}

bool is_full(void) {
  return top == STACK_SIZE;
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
    exit(EXIT_FAILURE);
  } else {
    contents[top++] = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    exit(EXIT_FAILURE);
  } else {
    return contents[--top];
  }
}

void stack_overflow() {
  printf("Expression is too complex.\n");
}

void stack_underflow() {
  printf("Not enough operands in expression");
}
