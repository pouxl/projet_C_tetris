#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>
/* On inclut les libs supplémentaires */
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

extern void cleanup(void);
extern void delay(unsigned int frameLimit);
extern void drawGame(void);
extern void gestionInputs(Input *input);
extern void getInput(Input *input);
extern SDL_Renderer *getrenderer(void);
extern void init(char *);

Input input;
 
 
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
        drawGame();
 
        // Gestion des 60 fps (1000ms/60 = 16.6 -> 16 
        delay(frameLimit);
        frameLimit = SDL_GetTicks() + 16;
    }
 
    // On quitte
    exit(0);
 
}
