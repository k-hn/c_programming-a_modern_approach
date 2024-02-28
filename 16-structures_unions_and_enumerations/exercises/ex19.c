#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 40

enum component_type {SS, EM};

struct pinball_machine {
  char name[NAME_LEN];
  int year;
  enum component_type type;
  int players;
};

int main(void)
{

  return EXIT_SUCCESS;
}
