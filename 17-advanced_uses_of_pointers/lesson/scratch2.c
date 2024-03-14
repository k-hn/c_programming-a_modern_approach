#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int value;			/* data stored in the node */
  struct node *next;		/* opinter to the next node */
};

struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);


int main(void)
{
  /* initial node */
  struct node *first = NULL;
  
  struct node *new_node;
  //  new_node = malloc(sizeof(struct node));
  new_node = calloc(1, sizeof(struct node));
  new_node->value = 10;
  new_node->next = first;
  first = new_node;

  /* second node */
  new_node = calloc(1, sizeof(struct node));
  new_node->value = 20;
  new_node->next = first;
  first = new_node;


  /* add third node */
  first = add_to_list(first, 30);

  for (struct node *node_ptr = first; node_ptr != NULL; node_ptr = node_ptr->next) {
    printf("%d\n", node_ptr->value);
  }
  
  return EXIT_SUCCESS;
}

struct node *add_to_list(struct node *list, int n)
{
  struct node *new_node;

  new_node = calloc(1, sizeof(struct node));
  if (new_node == NULL) {
    printf("Error: malloc failed in add_to_list.\n");
    exit(EXIT_FAILURE);
  }

  new_node->value = n;
  new_node->next = list;
  return new_node;
}

struct node *read_numbers(void)
{
  struct node *first = NULL;
  int n;

  printf("Enter a series of integers (0 to terminate): ");
  for (;;) {
    scanf("%d", &n);
    if (n == 0) {
      return first;
    }

    first = add_to_list(first, n);
  }
}

struct node *search_list(struct node *list, int n)
{
  struct node *p;

  for (p = list; p != NULL; p = p->next) {
    if (p->value == n) {
      return p;
    }
  }

  return NULL;
}

struct node *delete_from_list(struct node *list, int n)
{
  struct node *curr, *prev;

  for (curr = list, prev = NULL;
       curr != NULL && curr->value != n;
       prev = curr, curr = curr->next) {}

  if (curr == NULL) {
    return list;		/* n was not found */
  }

  if (prev == NULL) {
    list = list->next;		/* n is in the first node */
  } else {
    prev->next = curr->next;
  }
  
  free(curr);

  return list;
}
