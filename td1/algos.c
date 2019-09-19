#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "constantes.h"

int T[N];
int nb_line;

void lecture (){
	FILE *fichier = NULL;
	fichier = fopen (NOMFIC, "r");
	for (int i=0; i<N; i++){
			fscanf (fichier, "%d", &T[i]);
		}
		fclose(fichier);
	}
void ecrire_tab(){
	FILE *fic = NULL;
	fic = fopen ("nombres-verif.data", "w");
	for (int i= 0; i<N; i++){
		fprintf (fic, "%6d\n", T[i]);
		}
		fclose (fic);
	}
int recherche (int x){
	FILE *fic = NULL;
	fic = fopen (NOMFIC, "r");
	int cpt =0;
	nb_line=0;
	while (fscanf (fic, "%d", &T[nb_line]) != EOF){
		cpt ++;
		if (T[nb_line] == x){ printf (" Nombre de comparaison %d ", cpt);
			return 1;
			}
		nb_line++;
		}
		printf (" Nombre de comparaison %d ", cpt);
		return 0;
	}

int stat_recherche (int x){
	int cpt=0;
	nb_line=0;
	while (T[nb_line] != EOF){
		if (T[nb_line]==x){
			cpt++;
			return cpt;
			}
		}
		return cpt;
	}

int main (){
	lecture();
	ecrire_tab();
	/*
	int a = recherche (123);
	printf ("pour 123 %d \n", a);
	a = recherche (445478);
	printf ("pour 427261 %d \n", a);*/
	
	}
