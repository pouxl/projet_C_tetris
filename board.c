
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

#pragma comment (lib,"sdl.lib")      // ignorez ces lignes si vous ne linkez pas les libs de cette façon.
#pragma comment (lib,"sdlmain.lib")

#define LARGEUR_TILE 24  // hauteur et largeur des tiles.
#define HAUTEUR_TILE 16 

#define NOMBRE_BLOCS_LARGEUR 15  // nombre a afficher en x et y
#define NOMBRE_BLOCS_HAUTEUR 13

char* table[] = {
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"100000000000001",
"111111111111111"};


void Afficher(SDL_Surface* screen,SDL_Surface* tileset,char** table,int nombre_blocs_largeur,int nombre_blocs_hauteur)
{
	int i,j;
	SDL_Rect Rect_dest;
	SDL_Rect Rect_source;
	Rect_source.w = LARGEUR_TILE;
	Rect_source.h = HAUTEUR_TILE;
	for(i=0;i<nombre_blocs_largeur;i++)
	{
		for(j=0;j<nombre_blocs_hauteur;j++)
		{
			Rect_dest.x = i*LARGEUR_TILE;
			Rect_dest.y = j*HAUTEUR_TILE;
			Rect_source.x = (table[j][i]-'0')*LARGEUR_TILE;
			Rect_source.y = 0;
			SDL_BlitSurface(tileset,&Rect_source,screen,&Rect_dest);
		}
	}
	SDL_Flip(screen);
}

int main(int argc,char** argv)
{
	SDL_Surface* screen,*tileset;
	SDL_Event event;		// prepare SDL
	screen = SDL_CreateWindow(LARGEUR_TILE*NOMBRE_BLOCS_LARGEUR, HAUTEUR_TILE*NOMBRE_BLOCS_HAUTEUR);
	tileset = SDL_LoadBMP("tileset1.bmp");
	if (!tileset)
	{
		printf("Echec de chargement tileset1.bmp\n");
		SDL_Quit();
		system("pause");
		exit(-1);
	}
	Afficher(screen,tileset,table,NOMBRE_BLOCS_LARGEUR,NOMBRE_BLOCS_HAUTEUR);

	do  // attend qu'on appuie sur une touche.
	{
		SDL_WaitEvent(&event);
	} while (event.type!=SDL_KEYDOWN);
	
	SDL_FreeSurface(tileset);
	SDL_Quit();
	return 0;
}
