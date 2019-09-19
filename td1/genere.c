#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "constantes.h"

void ecrire (){
	int nombres;
	FILE *fichier = NULL;
	fichier = fopen (NOMFIC, "w");
	for (int i=0; i<N; i++){
		nombres = rand ()% MAX ;
		if (fichier != NULL){
			fprintf (fichier, "%6d\n", nombres);
			}
		}
		fclose(fichier);
}

int main(){
	srand (getpid());
	ecrire();
	printf ("Bonjour\n");
}
