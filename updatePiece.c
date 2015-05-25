#include "prototypes.h"
#include "pieces.h"

//gère l'action d'une piece en fonction de la touche du clavier
void updtatePiece(Input *input)
{
	if(input->up==1){
        piece_rotate(Piece);
	}
	if(input->down==1){
        piece_rotate_backwards(Piece);
    }
	if(input->left==1){
        piece_left(Piece);
	}
	if(input->right==1){
        piece_right(Piece);
	}
}
