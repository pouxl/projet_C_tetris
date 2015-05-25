 #include "prototypes.h"
 
 
Maps maps;
 
void initMaps(void)
{
	// Charge l'image du fond (background)
	maps.background = loadImage("map/black_converted.png");
	// Charge l'image du contour du tableau
	maps.wall = loadImage("map/url.png");
}
 
 
SDL_Texture *getBackground(void)
{
	return maps.background;
}
SDL_Texture *getWall(void){
	return maps.wall;
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
}
