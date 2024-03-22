#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *add_node(struct node *list, int n);
struct node *find_last(struct node *list, int n);

int main(void)
{
  struct node *lst = NULL;
  lst = add_node(lst, 11);
  lst = add_node(lst, 12);
  lst = add_node(lst, 13);
  lst = add_node(lst, 12);
  
  struct node *last_found = find_last(lst, 12);
  printf("Last found value: %d\n", last_found->value);

  return EXIT_SUCCESS;
}

struct node *find_last(struct node *list, int n)
{
  struct node *ptr_last = NULL;
  int count = 0;
  int hit_index = 0;
  
  for(struct node *ptr = list; ptr != NULL; ptr = ptr->next, count += 1) {
    if (ptr->value == n) {
      ptr_last = ptr;
      hit_index = count;
    }
  }

  printf("Last hit index: %d\n", hit_index);
  return ptr_last;
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
