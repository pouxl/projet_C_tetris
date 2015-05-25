typedef struct

{

    int score;          // Nombre de lignes réalisées

    char nom[20];  // Nom du joueur

} SCORE,*ptr_SCORE;


void static EcritFichierDeScore(SCORE*);
ptr_SCORE CreerScore(int, char*);
