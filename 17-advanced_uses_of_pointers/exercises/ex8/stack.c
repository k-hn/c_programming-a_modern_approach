#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct node {
  int value;
  struct node *next;
};

struct node *stack = NULL;

void make_empty(void)
{
  struct node *temp = stack;
  while (stack != NULL) {
    temp = stack;
    stack = stack->next;
    free(temp);
  }

  stack = NULL;
}

int is_empty(void)
{
  return stack == NULL ? 1 : 0;
}

bool push(int i)
{
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Could not create new node in `create_node`.\n");
    return false;
  }
  new_node->value = i;
  new_node->next = stack;
  stack = new_node;

  return true;
}

int pop(void)
{
  struct node *temp = stack;
  int value = temp->value;
  stack = stack->next;
  free(temp);

  return value;
}

int main(void)
{
  push(32);
  push(12);
  push(4);

  printf("Pop: %d\n", pop());
  printf("New top: %d\n", stack->value);

  make_empty();
  printf("is_empty?: %d\n", is_empty());
  
  return EXIT_SUCCESS;
}
