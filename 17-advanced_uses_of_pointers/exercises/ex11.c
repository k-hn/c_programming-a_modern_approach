#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

int count_occurrences(struct node *list, int n);
struct node *add_node(struct node *list, int n);

int main(void)
{
  struct node *lst = NULL;
  lst = add_node(lst, 11);
  lst = add_node(lst, 12);
  lst = add_node(lst, 13);
  lst = add_node(lst, 12);

  printf("Occurrences of 12: %d\n", count_occurrences(lst, 12));

  return EXIT_SUCCESS;
}

int count_occurrences(struct node *list, int n)
{
  int count = 0;

  for (struct node *ptr = list; ptr != NULL; ptr = ptr->next) {
    if (ptr->value == n) {
      count += 1;
    }
  }

  return count;
}

struct node *add_node(struct node *list, int n)
{
  struct node *new_node = malloc(sizeof(struct node));
  if (new_node == NULL) {
    printf("Error allocating memory in `add_node`");
    return NULL;
  }

  new_node->value = n;
  new_node->next = list;
  list = new_node;

  return list;
}
