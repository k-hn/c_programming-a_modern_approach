#include <stdio.h>
#include <stdlib.h>

char *get_city(int area_code) {
  char *city;
  switch(area_code) {
  case 229:
    return "Albany";
  case 404:
  case 470:
  case 678:
  case 770:
    return "Atlanta";
  case 478:
    return "Macon";
  case 706:
  case 762:
    return "Columbus";
  case 912:
    return "Savannah";
  default:
    return "Area code not recognised";
  }
}

int main(void) {
  int area_code;

  printf("Enter area code: ");
  scanf("%d", &area_code);

  printf("%s\n", get_city(area_code));

  return EXIT_SUCCESS;
}
