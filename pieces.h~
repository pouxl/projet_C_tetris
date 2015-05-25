#ifndef TETRIS_PIECES_H
#define TETRIS_PIECES_H

#include "colors.h"
//#include "definitions.h"

#define PIECE_COUNT 7
#define PIECE_ROWS 4
#define PIECE_COLUMNS 4
#define PIECE_POINTS (PIECE_ROWS * PIECE_COLUMNS)
#define PIECE_BLOCKS_SIZE 4
#define GAME_COLUMNS 10
#define GAME_LINES 20
int map[GAME_LINES][GAME_COLUMNS];

typedef struct {
    int n;
    int matrix[4][16];
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

#endif