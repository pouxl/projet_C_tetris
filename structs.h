#ifndef DEF_STRUCTS
#define DEF_STRUCTS
 
#include "defs.h"
 
/* Structures qui seront utilisées pour gérer le jeu */
 
// Structure pour gérer l'input 
typedef struct Input
{
 
    int left, right, up, down, pause;
 
} Input;

typedef struct Maps
{
 
	SDL_Texture *background;
	SDL_Texture *wall;


} Maps;
 
#endif
