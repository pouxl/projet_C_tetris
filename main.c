#include "prototypes.h"

Input input;
 
int main(int argc, char *argv[])
{
    unsigned int frameLimit = SDL_GetTicks() + 16;
    int go;
 
    // Initialisation de la SDL 
    init("tetris");

    // Chargement des ressources (graphismes)
    loadGame();
 
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
