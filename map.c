#include "prototypes.h"
 
 
Maps maps;
 
void initMaps(void)
{
	// Charge l'image du fond (background)
	maps.background = loadImage("map/black_converted.png");
	maps.black = loadImage("map/black2.png");
	// Charge l'image du contour du tableau
	maps.wall = loadImage("map/url.png");
	//Charge le titre
	maps.title = loadImage("map/url2.png");
	maps.scoreactuel = loadImage("map/score.jpg");
	
}
 
 
SDL_Texture *getBackground(void)
{
	return maps.background;
}
SDL_Texture *getWall(void){
	return maps.wall;
}
SDL_Texture *getTitle(void){
	return maps.title;
}
SDL_Texture *getScoreActuel(void){
	return maps.scoreactuel;
}
SDL_Texture *getBlack(void){
	return maps.black;
}
 
 
void cleanMaps(void)
{
	// libère la texture du background
	if (maps.background != NULL)
	{
	SDL_DestroyTexture(maps.background);
	maps.background = NULL;
	}
	if(maps.wall != NULL)
	{
	SDL_DestroyTexture(maps.wall);
	maps.wall = NULL;
	}
	if(maps.title != NULL)
	{
	SDL_DestroyTexture(maps.title);
	maps.title = NULL;
	}
	if(maps.scoreactuel != NULL){
	maps.scoreactuel = NULL;
	}
	if(maps.black != NULL){
	maps.black = NULL;
	}
}
