#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_SIZE 20

int main(void) {
  char smallest[MAX_WORD_SIZE];
  char largest[MAX_WORD_SIZE];
  char temp[MAX_WORD_SIZE];

  printf("Enter word: ");
  scanf("%s", temp);
  strncpy(smallest, temp, MAX_WORD_SIZE);
  strncpy(largest, temp, MAX_WORD_SIZE);  

  while (strlen(temp) != 4) {
    printf("Enter word: ");
    scanf("%s", temp);

    /* Check if smaller than smallest or larger than largest */
    if (strcmp(temp, smallest) < 0) {
      strcpy(smallest, temp);
    } else if (strcmp(temp, largest) > 0) {
      strcpy(largest, temp);
    }
  }

  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);
  
  return EXIT_SUCCESS;
}
