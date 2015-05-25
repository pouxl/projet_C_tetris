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

void piece_rotate(Piece *piece) {
    piece -> n = ++piece -> n % 4;
}

void piece_rotate_backwards(Piece *piece) {
    piece -> n = (-- piece -> n > -1) ? piece -> n : 3;
}

void piece_left(Piece *piece) {
    if (piece -> x != 0) {
        (piece -> x)--;
    }
}
void piece_right(Piece *piece) {
    if (piece -> x != GAME_COLUMNS-1) {
        (piece -> x)++;
    }
}

void piece_random(Piece *dest) {
    memcpy(dest, piece_list[rand() % PIECE_COUNT], sizeof(Piece)-sizeof(int) * 4);
}

void piece_new(Piece *piece) {
    piece_random(piece);
    piece -> x_before = piece -> x = 1 + (GAME_COLUMNS - 2 - PIECE_BLOCKS_SIZE) / 2;
    piece -> y_before = piece -> y = 1;
    piece -> t0 = piece -> t1 = 0;
}

void tetrisScoring(int etat) {
    switch (etat) {
        case 1 :
            //Une pièce ajoutée, on ajoute 1 point
            score += 1;
            break;
        case 2:
            //Une ligne effacée, on ajoute 40 points
            score += 40;
            break;
        case 3 :
            //Deux ligne effacées, on ajoute 100 points
            score += 100;
            break;
        case 4 :
            //Trois ligne effacées, on ajoute 300 points
            score += 300;
            break;
        case 5 :
            //Quatre ligne effacées, on ajoute 1200 points
            score += 1200;
            break;
        default :
            //On ne peut pas faire plus de 4 lignes d'un coup
            break;
    }
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

static void shiftMap() {
    int i = 0;
    int j = 0;
    int iLine = 0;
    int total = 0; // le nombre total de lignes effacées

    if (iLine < GAME_LINES && fullLine(iLine)) {
        for (i = iLine; i > 0; i--) {
            for (j = 0; j < GAME_COLUMNS; j++) {
                map[i-1][j] = map[i][j];
            }
        }
        iLine --;
        total ++;
    }
    if (total > 0) {
        tetrisScoring(1+total);
    }
}

void piece_fall () {
    int i;
    int j;
    Piece *piece;
    //Variable qui indique si la pièce peut descendre ou pas
    int autorisee;

    autorisee = 1;
    //Ici, on vÈrifie d'abord que la piËce peut tomber
    //Pour cela, on parcourt le tableau et on vÈrifie que sous chaque carrÈ
    //La valeur est Ègale ou plus petite que celle du carrÈ bougeant

    for (i = 1; i < GAME_LINES && autorisee; i++) {
        for (j = 1; j < (GAME_COLUMNS-1) && autorisee; j++) {
            if (map[j][i] < 10 && map[j][i]>0) {
                    autorisee = 0;
            }
        }
    }

    if (autorisee) {
        //Chute de la pièce
        for (i = 1; i < GAME_LINES; i++) {
            for (j = 1; j < (GAME_COLUMNS-1); j++) {
                if (map[j][i] < 10 && map[j][i]>0) {
                    //La place du dessous est prise par ce morceau de pièce,
                    map[j][i-1] = map[j][i];
                    //Et la place actuelle est libérée
                    map[j][i] = 0;
                }
            }
        }
    } else {
        //La piËce n'est pas autorisÈe ‡ descendre,
        //On va donc la transformer en bloc fixe
        for (i = 1;i < GAME_LINES; i++) {
            for (j = 1; j < (GAME_COLUMNS-1); j++) {
                if (map[j][i] < 10 && map[j][i]>0) {
                    //La place actuelle est transformée en bloc fixe
                    map[j][i] = map[j][i] + 10;
                    //Si un seul morceau de la pièce qui se transforme
                    //est situé trop haut, c'est la fin de la partie
                    if (i >= GAME_LINES-2) {
                        for (i = 1; i <GAME_LINES; i++)
                            for (j = 1;j < (GAME_COLUMNS-1); j++)
                                map[j][i] = 0;
                        fin_partie = 1;
                    }
                }
            }
        }
        tetrisScoring(1);
        shiftMap();
        piece_new(piece);
    }
}