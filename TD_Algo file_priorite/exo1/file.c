#include "file.h"
#include <stdlib.h>
#include <stdio.h>

File creer_file (){
	File f ;
	f.debut = 0;
	f.taille= 0	;
	f.contenu = malloc (sizeof(elem)*TAILLE_FILE);
	return f;
}

void affiche_file(File f){
	printf ("\t Liste actuelle :\n");
		for (int i = 0; i<f.taille; i++){
			printf ("(%d, %d) ", f.contenu[(f.debut+i)%TAILLE_FILE].id, f.contenu[(f.debut+i)%TAILLE_FILE].prio);
		  }
	printf ("\n\n");
}
int est_vide (File f){
	if (f.contenu==NULL) { return 0;}
	else return 1;
}

File enfile (File f, elem x){
	if (f.taille == TAILLE_FILE) { printf ("erreur file pleine\n"); exit (1); }
	f.contenu [ (f.debut + f.taille) % TAILLE_FILE] = x;
	f.taille ++;
	return f;
}

elem defile (File *f){
	if (f->taille == 0) {printf ("!!! ERREUR !!! file vide \n"); exit(1);}
	elem res ;
	res = f->contenu[f->debut];
	f->debut = (f->debut + 1)%TAILLE_FILE;
	f->taille --;
	return res;  
}













