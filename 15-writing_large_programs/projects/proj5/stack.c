#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int contents[STACK_SIZE];
int top = 0;


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
