#include <stdio.h>
#include <stdlib.h>

#define GRADE_ARRAY_SIZE 5
#define NUMBER_OF_STUDENTS 5

double get_student_average(double student_scores[]) {
  double sum = 0.0;
  for (int i = 0; i < GRADE_ARRAY_SIZE; i++) {
    sum += student_scores[i];
  }
  return sum / (double) GRADE_ARRAY_SIZE;
}

void print_student_average_score(double score_arr[NUMBER_OF_STUDENTS][GRADE_ARRAY_SIZE]) {
  for (int row = 0; row < NUMBER_OF_STUDENTS; row++) {
    printf("Student %d average: %f\n", row + 1, get_student_average(score_arr[row]));
  }
}


void print_quiz_average(double score_arr[NUMBER_OF_STUDENTS][GRADE_ARRAY_SIZE]) {
  for (int col = 0; col < GRADE_ARRAY_SIZE; col++) {
    double sum = 0.0;
    double highest = score_arr[0][col];
    double lowest = score_arr[0][col];
    for (int row = 0; row < NUMBER_OF_STUDENTS; row++) {
      sum += score_arr[row][col];

      if (score_arr[row][col] > highest) {
	highest = score_arr[row][col];
      }

      if (score_arr[row][col] < lowest) {
	lowest = score_arr[row][col];
      }
    }
    
    double avg = sum / (double) NUMBER_OF_STUDENTS;
    printf("Quiz %d average: %f\n", col + 1, avg);
    printf("Quiz %d highest: %f\n", col + 1, highest);
    printf("Quiz %d lowest: %f\n", col + 1, lowest);
    printf("\n");
  }
}

int main(void) {
  double input_arr[NUMBER_OF_STUDENTS][GRADE_ARRAY_SIZE];

  /* Input loops */
  for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
    printf("Enter student %d's grades: ", i + 1);
    for (int j = 0; j < GRADE_ARRAY_SIZE; j++) {
      scanf("%lf", &input_arr[i][j]);
    }
  }

  /* Print average score of each student */
  printf("\nStudent Averages: \n");
  print_student_average_score(input_arr);

  /* Print quiz average */
  printf("\nQuiz Statistics: \n");
  print_quiz_average(input_arr);
    
  return EXIT_SUCCESS;
}
