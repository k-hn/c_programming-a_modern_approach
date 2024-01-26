#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 7

float compute_GPA(char grades[], int n);
int convert_grade(char grade);

int main(void) {
  char grades[ARRAY_SIZE] = {'A', 'B', 'C', 'D', 'F', 'A', 'A'};

  printf("GPA: %g\n", compute_GPA(grades, ARRAY_SIZE));

  return EXIT_SUCCESS;
}

int convert_grade(char grade) {
  switch(toupper(grade)) {
  case 'A':
    return 4;
  case 'B':
    return 3;
  case 'C':
    return 2;
  case 'D':
    return 1;
  default:
    return 0;
  }
}

float compute_GPA(char grades[], int n) {
  int total_grade_points = 0;

  for (int i = 0; i < n; i++) {
    total_grade_points += convert_grade(grades[i]);
  }
  
  return (float) total_grade_points / (float) n;
}
