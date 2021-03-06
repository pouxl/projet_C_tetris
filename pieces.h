#ifndef TETRIS_PIECES_H
#define TETRIS_PIECES_H
#include "prototypes.h"
#include "colors.h"
#include "prototypes.h"
//#include "definitions.h"

#define PIECE_COUNT 7
#define PIECE_ROWS 4
#define PIECE_COLUMNS 4
#define PIECE_POINTS (PIECE_ROWS * PIECE_COLUMNS)
#define PIECE_BLOCKS_SIZE 4
#define GAME_COLUMNS 10
#define GAME_LINES 20
int score;
int map[GAME_LINES][GAME_COLUMNS];
int fin_partie;

typedef struct {
    int n;
    int matrix[16][4];
    Color color;
    int x;
    int y;
    int x_before;
    int y_before;
    unsigned int t0;
    unsigned int t1;
} Piece;

void piece_rotate(Piece *piece);
void piece_rotate_backwards(Piece *piece);
void piece_random(Piece *dest);
void piece_new(Piece *piece);
void piece_left(Piece *piece);
void piece_right(Piece *piece);

#endif
