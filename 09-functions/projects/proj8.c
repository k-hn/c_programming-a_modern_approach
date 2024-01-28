#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void) {
  srand(time(NULL)); 
  return (rand() % 12) + 1;
}

bool is_initial_roll_win(int num) {
  return num == 7 || num == 11;
}

bool is_initial_roll_loss(int num) {
  return num == 2 || num == 3 || num == 12;
}

bool is_point_win(int point, int num) {
  return num == point;
}

bool play_game(void) {
  bool is_initial_play = true;
  int point = 0;

  while (true) {
    int r = roll_dice();
    printf("You rolled: %d\n", r);

    if (is_initial_play) {
      if (is_initial_roll_win(r)) {
	printf("You win!\n");
	return true;
      } else if (is_initial_roll_loss(r)) {
	printf("You lose!\n");
	return false;
      } else {
	point = r;
	printf("Your point is %d\n", point);
	is_initial_play = false;
	while (getchar() != '\n') ;
	continue;
      }
    } else {
      if (is_point_win(point, r)) {
	printf("You win!\n");
	return true;
      } else {
	while (getchar() != '\n') ;
	continue;
      }
    }
  }
}

int main(void) {
  char play_again = 'y';

  int wins = 0, losses = 0;
  
  while (play_again == 'y') {
    if(play_game()) {
      wins += 1;
    } else {
      losses += 1;
    }

    printf("Play again? ");
    scanf("%c", &play_again);
    getchar();
    
    if (play_again == 'n') {
      printf("Wins: %d\tLosses: %d\n", wins, losses);
    }
  }

  return EXIT_SUCCESS;
}
