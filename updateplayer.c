
void updatePlayer(Input *input)
{
//Pour l'instant, on place automatiquement le joueur
//sur le sol à 302 pixels du haut de l'écran, car
//on ne gère pas encore les collisions avec le sol.
piece[x][y] =[800][1] ;

 
 
//Si on détecte un appui sur la touche fléchée gauche
if (input->left == 1)
{
//On diminue les coordonnées en x du joueur
piece[x][y] = piece[x-1][y];
//Et on indique qu'il va à gauche (pour le flip
//de l'affichage, rappelez-vous).
piece.direction = LEFT;
 
 
//Si ce n'était pas son état auparavant et qu'il est bien sur
//le sol (car l'anim' sera différente s'il est en l'air)
if (player.etat != WALK && player.onGround == 1)
{
//On enregistre l'anim' de la marche et on l'initialise à 0
player.etat = WALK;
player.frameNumber = 0;
player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;
player.frameMax = 8;
}
}
 
 
//Si on détecte un appui sur la touche fléchée droite
else if (input->right == 1)
{
//On augmente les coordonnées en x du joueur
player.x += PLAYER_SPEED;
//Et on indique qu'il va à droite (pour le flip
//de l'affichage, rappelez-vous).
player.direction = RIGHT;
 
 
//Si ce n'était pas son état auparavant et qu'il est bien sur
//le sol (car l'anim' sera différente s'il est en l'air)
if (player.etat != WALK && player.onGround == 1)
{
//On enregistre l'anim' de la marche et on l'initialise à 0
player.etat = WALK;
player.frameNumber = 0;
player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;
player.frameMax = 8;
}
}
 
 
//Si on n'appuie sur rien et qu'on est sur le sol, on charge l'animation marquant
//l'inactivité (Idle)
else if (input->right == 0 && input->left == 0 && player.onGround == 1)
{
//On teste si le joueur n'était pas déjà inactif, pour ne pas recharger l'animation
//à chaque tour de boucle
if (player.etat != IDLE)
{
//On enregistre l'anim' de l'inactivité et on l'initialise à 0
player.etat = IDLE;
player.frameNumber = 0;
player.frameTimer = TIME_BETWEEN_2_FRAMES_PLAYER;
player.frameMax = 8;
}
 
}
 
//On gère le scrolling (fonction ci-dessous)
centerScrollingOnPlayer();
 
}

