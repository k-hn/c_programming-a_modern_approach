#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_teenager_original(int age) {
  bool teenager;
  if (age >= 13)
    if (age <= 19)
      teenager = true;
    else
      teenager = false;
  else if (age < 13)
    teenager = false;

  return teenager;
}

bool is_teenager_modified(int age) {
  return age >= 13 && age <= 19;
}

int main(void) {
  int age;
  bool teenager;

  /* original */
  printf("[original] result: %d\n", is_teenager_original(5)); /* Output: 0 */
  printf("[original] result: %d\n", is_teenager_original(15)); /* Output: 1 */

  /* modified */
  printf("[modified] result: %d\n", is_teenager_modified(5)); /* Output: 0 */
  printf("[modified] result: %d\n", is_teenager_modified(15)); /* Output: 1 */

  return EXIT_SUCCESS;
}
