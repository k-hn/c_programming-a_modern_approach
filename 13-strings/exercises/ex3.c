#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j;
  char s[100];

  scanf("%d%s%d", &i, s, &j);
  printf("i: %d\ns: %s\nj: %d\n", i, s, j);

  /* Output */
  /* i: 12 */
  /* s: abc34 */
  /* j: 56 */

  return EXIT_SUCCESS;
}
