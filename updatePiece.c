#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <piece.h>


void updtatePiece(Input *input)
{
	if(input->up==1){
		void piece_rotate(Piece *piece)
	}
	if(input->down==1){
		void piece_rotate_backwards(Piece *piece)
	}
	if(input->left==1){
		void piece_left(Piece *piece)
	}
	if(input->right==1){
		void piece_right(Piece *piece)
	}
}
