#include <stdio.h>
#include <stdlib.h>

void initialise_magic_square(int n, char magic_square[n][n]);
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
  int n;

  printf("This program create a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  /* Check if n is indeed odd */
  if (n % 2 == 0) {
    printf("Size of magic square needs to be odd.\n");
    return EXIT_FAILURE;
  }

  char arr[n][n];
  initialise_magic_square(n, arr);
  create_magic_square(n, arr);
  print_magic_square(n, arr);

  return EXIT_SUCCESS;
}

void initialise_magic_square(int n, char magic_square[n][n]) {
  /* initialize array */
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      magic_square[i][j] = 0;
    }
  }
}

void create_magic_square(int n, char magic_square[n][n]) {
  int row = 0;
  int col = n / 2;

  for (int i = 1; i <= n * n; i++) {
    magic_square[row][col] = i;

    /* determine intended spot to place next value */
    int temp_col = col + 1 >= n ? 0 : col + 1;
    int temp_row = row - 1 < 0 ? n - 1 : row - 1;

    /* if next intended spot is occupied, put next value under current column */
    if (magic_square[temp_row][temp_col] != 0) {
      temp_row = row + 1 >= n ? 0 : row + 1;
      temp_col = col;
    }

    row = temp_row;
    col = temp_col;
  }
}

void print_magic_square(int n, char magic_square[n][n]) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
	printf("%4d\t", magic_square[i][j]);
      }
      printf("\n");
    }
}
