#include "file.h"
#include <stdlib.h>
#include <stdio.h>

File creer_file (){
	File f ;
	f.debut = 0;
	f.taille= 0	;
	f.contenu = malloc (sizeof(int)*TAILLE_FILE);
	return f;
}

void affiche_file(File f){
	if (f.debut + f.taille < TAILLE_FILE){
		for (int i = 0; i<f.taille; i++){
			printf ("%d ", f.contenu[i]);
			}
		} else {
			for (int i = f.debut; i< TAILLE_FILE; i++){
				printf ("%d ", f.contenu[i]);
				}
			for (int i=0; i< TAILLE_FILE - (f.debut + f.taille) ; i++){
				printf ("%d ", f.contenu[i]);
				}
			}
	
	printf ("\n");
}
int est_vide (File f){
	if (f.contenu==NULL) { return 0;}
	else return 1;
}

File enfile (File f, int x){
	if (f.taille == TAILLE_FILE) { printf ("erreur file pleine\n"); exit (1); }
	f.contenu [ (f.debut + f.taille) % TAILLE_FILE] = x;
	f.taille ++;
	return f;
}

int defile (File *f){
	if (f->taille == 0) {printf ("erreur file vide \n"); exit(1);}
	int res = f->contenu[f->debut] ;
	f->debut = (f->debut + 1)%TAILLE_FILE;
	f->taille --;
	return res;  
}













