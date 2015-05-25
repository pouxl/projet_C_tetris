#ifndef DEF_STRUCTS
#define DEF_STRUCTS
 
#include "defs.h"
 
/* Structures qui seront utilisées pour gérer le jeu */
 
// Structure pour gérer l'input

typedef struct

{

    int score;          // Nombre de lignes réalisées

    char nom[20];  // Nom du joueur

} SCORE,*ptr_SCORE;


void static EcritFichierDeScore(SCORE*);
ptr_SCORE CreerScore(int, char*);
typedef struct Input
{
 
    int left, right, up, down, pause;
 
} Input;

typedef struct Maps
{
 
	SDL_Texture *background;
	SDL_Texture *wall;
	SDL_Texture *title;
	SDL_Texture *scoreactuel;
	SDL_Texture *black;


} Maps;
 
#endif
