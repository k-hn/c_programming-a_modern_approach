#include <stdio.h>
#include <stdlib.h>

void grade_a(int score) {
  if (score >= 90)
    printf("A");
  else if (score >= 80)
    printf("B");
  else if (score >= 70)
    printf("C");
  else if (score >= 60)
    printf("D");
  else
    printf("F");
}

void grade_b(int score) {
  if (score < 60)
    printf("F");
  else if (score < 70)
    printf("D");
  else if (score < 80)
    printf("C");
  else if (score < 90)
    printf("B");
  else
    printf("A");
}

int main(void) {
  grade_a(55);
  printf("\n");
  grade_b(55);
  printf("\n");
  
  return EXIT_SUCCESS;
}

/* both approaches are equivalent */
