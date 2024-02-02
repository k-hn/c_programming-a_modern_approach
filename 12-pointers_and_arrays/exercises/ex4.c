/* change make_empty, is_empty, is_full to  use the pointer variable top_ptr */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 5

/* external variables */
int contents[STACK_SIZE];
int top = 0;
int *top_ptr = contents;

void stack_overflow(void) {
  printf("Stack overflow!\n");
}

void stack_underflow(void) {
  printf("Stack underflow!\n");
}

void make_empty(void) {
  top_ptr = contents;
}

bool is_empty(void) {
  return top_ptr == contents;
}

bool is_full(void) {
  return top_ptr == &contents[STACK_SIZE];
}

void push(int i) {
  if (is_full()) {
    stack_overflow();
    exit(EXIT_FAILURE);
  } else {
    *top_ptr++ = i;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    exit(EXIT_FAILURE);
  } else {
    return *--top_ptr;
  }
}

void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  make_empty();
  
  push(55);
  push(23);
  push(55);
  push(23);
  push(55);
  //push(23);   // Causes stack overflow
  
  printf("Stack: ");
  print_array(contents, STACK_SIZE);

  pop();
  pop();
  pop();
  pop();
  pop();
  // pop();  // Causes stack underflow

  return EXIT_SUCCESS;
}


