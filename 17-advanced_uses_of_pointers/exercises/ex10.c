#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 100

struct part {
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

void print_part(struct part *p)
{
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
}

int main(void)
{
  struct part *my_part = malloc(sizeof(struct part));
  if (my_part == NULL) {
    printf("Could not allocate space for `my_part`\n");
    exit(EXIT_FAILURE);
  }
  my_part->number = 23;
  strcpy(my_part->name, "Shed rake");
  my_part->on_hand = 50;

  print_part(my_part);

  return EXIT_SUCCESS;
}
