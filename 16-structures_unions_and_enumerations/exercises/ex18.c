#include <stdio.h>
#include <stdlib.h>

/* a */
typedef enum {
  EMPTY,
  PAWN,
  CASTLE,
  KNIGHT,
  BISHOP,
  QUEEN,
  KING
} Piece;

typedef enum {BLACK, WHITE} Color;

/* b */
typedef struct {
  Piece piece;
  Color color;
} Square;

/* c & d */
#define BOARD_SIZE 8
Square board[BOARD_SIZE][BOARD_SIZE] = {
  {{CASTLE, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
   {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {CASTLE, BLACK}},
  
  {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
   {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},
  
  {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
   {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
  
  {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
   {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
  
  {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
   {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},

  {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
   {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
  
  {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
   {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},
  
  {{CASTLE, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE},
   {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {CASTLE, WHITE}}
};

int main(void)
{
  
  return EXIT_SUCCESS;
}
