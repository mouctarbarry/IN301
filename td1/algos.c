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
		if (T[nb_line] == x){ printf (" Nombre de comparaison %d \n", cpt);
			return 1;
			}
		nb_line++;
		}
		printf (" Nombre de comparaison %d \n", cpt);
		return 0;
	}

int stat_recherche (int x){
	int cpt=0;
	FILE *f =NULL;
	f = fopen (NOMFIC, "r");
	while (fscanf (f, "%d \n", &T[nb_line]) != EOF){
		cpt++;
		if (T[nb_line]==x){
			return cpt;
		}
		nb_line++;
	}
	return cpt;
	}

int main (){
	lecture();
	ecrire_tab();
	printf("%d\n", recherche (3));
	printf ("%d \n ", stat_recherche (3));
}