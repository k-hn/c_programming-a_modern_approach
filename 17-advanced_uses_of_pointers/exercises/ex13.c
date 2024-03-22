#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *insert_into_ordered_list(struct node *list,
				      struct node *new_node)
{
  struct node *cur = list, *prev = NULL;
  while (cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
  }
  prev->next = new_node;
  new_node->next = cur;
  return list;
}

struct node *create_node(int value)
{
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error allocating memory in `add_node`\n");
    exit(EXIT_SUCCESS);
  }

  new_node->value = value;
  new_node->next = NULL;

  return new_node;
}

struct node *add_node(struct node *list, int value)
{
  struct node *new_node = create_node(value);
  new_node->next = list;
  list = new_node;

  return list;
}

void print_list(struct node *first)
{
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next) {
    printf("%d\n", ptr->value);
  }
}

int main(void)
{
  struct node *first = NULL;
  first = add_node(first, 15);
  first = add_node(first, 14);
  first = add_node(first, 13);
  first = add_node(first, 12);
  first = add_node(first, 11);
  first = add_node(first, 10);

  insert_into_ordered_list(first, create_node(23));

  //print_list(first);

  return EXIT_SUCCESS;
}
