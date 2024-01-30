#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
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

void stack_overflow(void) {
  printf("Stack overflow.\n");
}

void stack_underflow(void) {
  printf("Stack underflow.\n");
}

void push(char c) {
  if (is_full()) {
    stack_overflow();
    exit(EXIT_FAILURE);
  } else {
    contents[top++] = c;
  }
}

char pop(void) {
  if (is_empty()) {
    stack_underflow();
    exit(EXIT_FAILURE);
  } else {
    return contents[--top];
  }
}

int main(void) {
  char ch;
  char popped_ch;
  char success_message[] = "Parentheses/braces are nested properly.";
  char failure_message[] = "Parentheses/braces are not nested properly.";

  printf("Enter parentheses and/or braces: ");
  while((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{') {
      push(ch);
    } else if (ch == ')') {
      if (pop() != '(') {
	printf("%s\n", failure_message);
	return EXIT_SUCCESS;
      }
    } else if (ch == '}') {
      if (pop() != '{') {
	printf("%s\n", failure_message);
	return EXIT_SUCCESS;
      }
    }
  }

  if (top == 0) {
    printf("%s\n", success_message);
  } else {
    printf("%s\n", failure_message);
  }

  return EXIT_SUCCESS;
}
