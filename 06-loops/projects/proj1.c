#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  float input = 0, largest = 0;

  printf("Enter a number: ");
  scanf("%f", &input);
  largest = input;
  
  while(input > 0) {
    printf("Enter a number: ");
    scanf("%f", &input);

    if (input > largest) {
      largest = input;
    }  
    
  }

  printf("The largest number entered was %.2f\n", largest);

  return EXIT_SUCCESS;
}
