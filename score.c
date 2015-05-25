#include <stdlib.h>
#include <stdio.h>
#include "score.h"



int score ;

void augmentescore(int point){
	score += point ;
}


void static EcritFichierDeScore(SCORE* tabScores)
{

	FILE* fichier = NULL;

	fichier = fopen("score.txt", "w");

	if (fichier != NULL)
	{
		for(i=0;i<sizeof(tabScores);i++)
		{
		fprintf(fichier,"%d %s\n",score,nom);
		}
	}
	fclose(fichier);

	return 0
}

void static LitFichierDeScore(SCORE* tabScores){
	FILE* fichier = NULL ;

	fichier = fopen("score.txt", "r");

	for (i=0;i<sizeof(tabScores);i++)
	{
		fgets(tabScores[i],10,fichier);
		printf("%d"atoi(tabScores[i])
		
	}

	fclose(fichier);

}

void CreerScore(int score, char* nom){

	ptr_SCORE s=(ptr_SCORE) malloc(sizeof(SCORE));
	s -> score = score;
	s -> nom = nom ;
}

void AjouteScore (SCORE score)
{
	int j ;
	int i ;
	for(i=0;i<sizeof(tabScores);i++);
	LitFichierDeScore(tabScores);
	if (score > tabScores[i])
	{
		for(j=9;j>i;j--)
		{
			tabScores[j]=tabScore[j-1];

		}
		tabScores[i]=score;
	}
	EcritFichierDeScore(tabScores)
	

}
