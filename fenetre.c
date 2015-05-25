#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

#define MAX_MAP_X 400
#define MAX_MAP_Y 150
 
/* Taille d'une tile (32 x 32 pixels) */
#define TILE_SIZE 32
 
/* Constantes pour l'animation */
#define TIME_BETWEEN_2_FRAMES 20
typedef struct Input
{
 
    int left, right, up, down, pause;
 
} Input;
Input input;
void loadGame(void);
void init(char *title);
void cleanup();
void gestionInputs(Input *input);
void getInput(Input *input);
SDL_Texture *loadImage(char *name);
SDL_Texture *getBackground(void);
void drawGame(void);
void drawImage(SDL_Texture *image, int x, int y);
void delay(unsigned int frameLimit);
void loadMap(char *name);
SDL_Renderer *getrenderer(void);



SDL_Renderer *renderer;
SDL_Window* screen;

SDL_Renderer *getrenderer(void)
{
    return renderer;
}
typedef struct Map
{
 
	SDL_Texture *background;

	SDL_Texture *tileSet, *tileSetB;
 
	//Numéro du tileset à utiliser
	int tilesetAffiche;
 
	/* Coordonnées de départ du héros, lorsqu'il commence le niveau */
	int beginx, beginy;
 
	/* Coordonnées de début, lorsqu'on doit dessiner la map */
	int startX, startY;
 
	/* Coordonnées max de fin de la map */
	int maxX, maxY;
 
	/* Tableau à double dimension représentant la map de tiles */
	int tile[MAX_MAP_Y][MAX_MAP_X];
 
	//Deuxième couche de tiles
	int tile2[MAX_MAP_Y][MAX_MAP_X];
 
	//Troisième couche de tiles
	int tile3[MAX_MAP_Y][MAX_MAP_X];
 
	/* Timer et numéro du tileset à afficher pour animer la map */
	int mapTimer, tileSetNumber;

 
} Map;


Map map;

  

 




void loadGame(void)
{
 
//On charge les données pour la map
initMaps();

}


 
void init(char *title)
{
 
    screen = SDL_CreateWindow(title,
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  800, 480,
                                  SDL_WINDOW_SHOWN);
 
    //On crée un renderer pour la SDL et on active la synchro verticale : VSYNC
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_PRESENTVSYNC);
 
    // Si on n'y arrive pas, on quitte en enregistrant l'erreur dans stdout.txt
    if (screen == NULL || renderer == NULL)
    {
        printf("Impossible d'initialiser le mode écran à %d x %d: %s\n", 800, 
                                                                    480, SDL_GetError());
        exit(1);
    }
 
    //Initialisation du chargement des images png avec SDL_Image 2
    int imgFlags = IMG_INIT_PNG;
    if( !( IMG_Init( imgFlags ) & imgFlags ) )
    {
        printf( "SDL_image n'a pu être initialisée! SDL_image Error: %s\n", IMG_GetError() );
        exit(1);
    }
 
    //On cache le curseur de la souris 
    SDL_ShowCursor(SDL_DISABLE);
 
    //On initialise SDL_TTF 2 qui gérera l'écriture de texte
    if (TTF_Init() < 0)
    {
        printf("Impossible d'initialiser SDL TTF: %s\n", TTF_GetError());
        exit(1);
    }

 
}
void cleanup()
{
    cleanMaps();
    //On quitte SDL_Mixer 2 et on décharge la mémoire
    Mix_CloseAudio();
    Mix_Quit();
 
    //On fait le ménage et on remet les pointeurs à NULL
    SDL_DestroyRenderer(renderer);
    renderer = NULL;
    SDL_DestroyWindow(screen);
    screen = NULL;
 
    //On quitte SDL_TTF 2
    TTF_Quit();
 
    //On quitte la SDL 
    SDL_Quit();
}
 



void gestionInputs(Input *input)
{
    //On gère le clavier 
    getInput(input);
}
 
 
void getInput(Input *input)
{
    SDL_Event event;
 
    /* Keymapping : gère les appuis sur les touches et les enregistre
    dans la structure input */
 
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
 
            case SDL_QUIT:
                exit(0);
            break;
 
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        exit(0);
                    break;

		    case SDLK_SPACE:
			input->pause = 1;
 
                    case SDLK_UP:
                        input->up = 1;
                    break;
 
                    case SDLK_DOWN:
                        input->down = 1;
                    break;
 
                    case SDLK_LEFT:
                        input->left = 1;
                    break;
 
                    case SDLK_RIGHT:
                        input->right = 1;
                    break;
                     default:
		    break;
               
                }
            break;
 
            case SDL_KEYUP:
                switch (event.key.keysym.sym)
                {
                    case SDLK_SPACE:
                        input->pause = 0;
                    break;
 
                    case SDLK_UP:
                        input->up = 0;
                    break;

		    case SDLK_DOWN:
			input->down = 0;
		    break;
 
                    case SDLK_LEFT:
                        input->left = 0;
                    break;
 
                    case SDLK_RIGHT:
                        input->right = 0;
                    break;
 
                    default:
		    break;
        
                }
            break;
 
        }
 
    }
}


SDL_Texture *loadImage(char *name)
{
 
/* Charge les images avec SDL Image dans une SDL_Surface */
 
	SDL_Surface *loadedImage = NULL;
	SDL_Texture *texture = NULL;
	loadedImage = IMG_Load(name);
 
	if (loadedImage != NULL)
	{
	// Conversion de l'image en texture
		texture = SDL_CreateTextureFromSurface(getrenderer(), loadedImage);
 
	// On se débarrasse du pointeur vers une surface
	SDL_FreeSurface(loadedImage);
	loadedImage = NULL;
	}
	else
		printf("L'image n'a pas pu être chargée! SDL_Error : %s\n", SDL_GetError());
	 
	return texture;
 
}

SDL_Texture *getBackground(void)
{
	return map.background;
}
void drawImage(SDL_Texture *image, int x, int y)
{
 
	SDL_Rect dest;
 
	/* Règle le rectangle à dessiner selon la taille de l'image source */
	dest.x = x;
	dest.y = y;
 
	/* Dessine l'image entière sur l'écran aux coordonnées x et y */
	SDL_QueryTexture(image, NULL, NULL, &dest.w, &dest.h);
	SDL_RenderCopy(getrenderer(), image, NULL, &dest);
 

} 
void drawGame(void)
{
 
// Affiche le fond (background) aux coordonnées (0,0)
	drawImage(getBackground(), 0, 0);
 
// Affiche l'écran
	SDL_RenderPresent(getrenderer());
 
// Délai pour laisser respirer le proc
	SDL_Delay(1);
 
}

 


 

void delay(unsigned int frameLimit)
{
    // Gestion des 60 fps (images/stories/seconde)
    unsigned int ticks = SDL_GetTicks();
 
    if (frameLimit < ticks)
    {
        return;
    }
 
    if (frameLimit > ticks + 16)
    {
        SDL_Delay(16);
    }
 
    else
    {
        SDL_Delay(frameLimit - ticks);
    }
}





 
void initMaps(void)
{
	// Charge l'image du fond (background)
	map.background = loadImage("map/background.png");

}
 
 

 
void cleanMaps(void)
{
	// Libère la texture du background
	if (map.background != NULL)
	{
		SDL_DestroyTexture(map.background);
		map.background = NULL;
	}
 
}





 
 
int main(int argc, char *argv[])
{
    unsigned int frameLimit = SDL_GetTicks() + 16;
    int go;
 
    // Initialisation de la SDL 
    init("tetris");
 
    // Appelle la fonction cleanup à la fin du programme 
    atexit(cleanup);
 
    go = 1;
 
    // Boucle infinie, principale, du jeu 
    while (go == 1)
    {
        //Gestion des inputs clavier
        gestionInputs(&input);
 
        //On dessine tout
	loadGame();
        drawGame();
 
        // Gestion des 60 fps (1000ms/60 = 16.6 -> 16 
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }
 
    // On quitte
    exit(0);
 
}

