#ifndef PROTOTYPES
#define PROTOTYPES
 
#include "structs.h"
 
/* Catalogue des prototypes des fonctions utilisées */
 
void cleanMaps(void);
void cleanup(void);
void delay(unsigned int frameLimit);
void drawGame(void);
void drawImage(SDL_Texture *, int, int);
void drawMap(int);
void gestionInputs(Input *input);
SDL_Texture *getBackground(void);
void getInput(Input *input);
SDL_Renderer *getrenderer(void);
SDL_Texture *getWall(void);
void init(char *);
void initMaps(void);
void loadGame(void);
SDL_Texture *loadImage(char *name);
SDL_Texture *getTitle(void);
SDL_Texture *getScoreActuel(void);
SDL_Texture *getBlack(void);

#endif
