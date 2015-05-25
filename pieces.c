#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "pieces.h"

Piece i = {
	.n = 0, 
    .matrix = {{0, 0, 0, 0},
    		   {1, 1, 1, 1},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 1, 0},
    		   {0, 0, 1, 0},
    		   {0, 0, 1, 0},
    		   {0, 0, 1, 0},

    		   {0, 0, 0, 0},
    		   {0, 0, 0, 0},
    		   {1, 1, 1, 1},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0}}, 
    .color = DARK_CYAN, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};


Piece j = {
	.n = 0, 
    .matrix = {{1, 0, 0, 0},
    		   {1, 1, 1, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 1, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},

    		   {0, 0, 0, 0},
    		   {1, 1, 1, 0},
    		   {0, 0, 1, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {1, 1, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_RED, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};


Piece l = {
	.n = 0, 
    .matrix = {{0, 0, 1, 0},
    		   {1, 1, 1, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 0, 0},
    		   {1, 1, 1, 0},
    		   {1, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {1, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_BROWN, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};


Piece o = {
	.n = 0, 
    .matrix = {{0, 1, 1, 0},
    		   {0, 1, 1, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 1, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 1, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 1, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_MAGENTA, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};


Piece s = {
	.n = 0, 
    .matrix = {{0, 1, 1, 0},
    		   {1, 1, 0, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 1, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 0, 0},
    		   {0, 1, 1, 0},
    		   {1, 1, 0, 0},
    		   {0, 0, 0, 0},

    		   {1, 0, 0, 0},
    		   {1, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_GRAY, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};

Piece t = {
	.n = 0, 
    .matrix = {{0, 1, 0, 0},
    		   {1, 1, 1, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {0, 1, 1, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 0, 0},
    		   {1, 1, 1, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {1, 1, 0, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_GREEN, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};


Piece z = {
	.n = 0, 
    .matrix = {{1, 1, 0, 0},
    		   {0, 1, 1, 0},
  			   {0, 0, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 1, 0},
    		   {0, 1, 1, 0},
    		   {0, 1, 0, 0},
    		   {0, 0, 0, 0},

    		   {0, 0, 0, 0},
    		   {1, 1, 0, 0},
    		   {0, 1, 1, 0},
    		   {0, 0, 0, 0},

    		   {0, 1, 0, 0},
    		   {1, 1, 0, 0},
    		   {1, 0, 0, 0},
    		   {0, 0, 0, 0}}, 
    .color = DARK_BLUE, 
	.x = 0, 
	.y = 0, 
	.x_before = 0, 
	.y_before = 0,
	.t0 = 0,
	.t1 = 0};

Piece *piece_list[PIECE_COUNT] = {&i, &j, &l, &o, &s, &t, &z};


void party_new() {
    int i = 0;
    int j = 0;
    for (i = 0; i < GAME_COLUMNS; i++) {
        for (j = 0; j < GAME_LINES; j++) {
            map[i][j] = 0;
        }
    }
    int score = 0;
}

void piece_rotate(Piece *piece)
{
    piece -> n = ++piece -> n % 4;
}

void piece_rotate_backwards(Piece *piece)
{
    piece -> n = (-- piece -> n > -1) ? piece -> n : 3;
}

void piece_random(Piece *dest)
{
    memcpy(dest, piece_list[rand() % PIECE_COUNT], sizeof(Piece)-sizeof(int) * 4);
}

void piece_new(Piece *piece)
{
    piece_random(piece);
    piece -> x_before = piece -> x = 1 + (GAME_COLUMNS - 2 - PIECE_BLOCKS_SIZE) / 2;
    piece -> y_before = piece -> y = 1;
    piece -> t0 = piece -> t1 = 0;
}
void piece_left(Piece *piece){
	
}
void piece_right(Piece *piece){
	
}

static bool fullLine(int iLine) {
    int i = 0;
    for (i = 0; i < GAME_COLUMNS; i++) {
            if (iLine < GAME_LINES) {
              if (map[iLine][i] != 0) {
                return true;
              }
            }
         
    }
    return false;
}

static void shiftMap(int iLine) {
    int i = 0;
    int j = 0;
    if (iLine < GAME_LINES && fullLine(iLine)) {
        for (i = iLine; i > 0; i--) {
            for (j = 0; j < GAME_COLUMNS; j++) {
                map[i-1][j] = map[i][j];
            }
        }
    }
}

int tetrisScoring(int iLine) {
    return 0;
}

