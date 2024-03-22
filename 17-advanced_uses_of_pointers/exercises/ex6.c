#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *delete_from_list(struct node *list, int n);

int main(void)
{
  struct node *first = NULL, *new_node;

  /* first = NULL; */
  new_node = malloc(sizeof(struct node));
  new_node->value = 21;
  new_node->next = first;
  first = new_node;

  new_node = malloc(sizeof(struct node));
  new_node->value = 22;
  new_node->next = first;
  first = new_node;

  new_node = malloc(sizeof(struct node));
  new_node->value = 23;
  new_node->next = first;
  first = new_node;

  /* print node values before deletion */
  printf("\nBefore\n");
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next) {
    printf("%d\n", ptr->value);
  }

  first = delete_from_list(first, 22);
  /* print node values after deletion */
  printf("\nAfter\n");
  for (struct node *ptr = first; ptr != NULL; ptr = ptr->next) {
    printf("%d\n", ptr->value);
  }

  struct node *ptr = first;
  while(first != NULL) {
    ptr = first;
    first = first->next;
    free(ptr);
  }
  

  return EXIT_SUCCESS;
}

struct node *delete_from_list(struct node *list, int n)
{
  /* check if first node matches */
  if (list->value == n) {
    list = list->next;
  }
  
  /* check if subsequent nodes match */
  struct node *temp;
  for (struct node *ptr = list; ptr->next != NULL; ptr = ptr->next) {
    if (ptr->next->value == n) {
      temp = ptr->next;
      ptr->next = temp->next;
      free(temp);
      break;
    }
  }

  return list;
}
