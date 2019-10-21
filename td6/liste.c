#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void affiche_iter (struct liste *l){
	
	while (l != NULL){
		printf ("%d ", l->val);
		l = l->suiv;
		}
	printf ("\n");
}
	
void affiche_rec (struct liste *l){

		if (l==NULL){ 
			printf ("\n");
			return;
			}
		else {
			printf ("%d ", l->val);
			affiche_rec (l->suiv);
			}
		
}
int est_present_iter (struct liste *l, int val){
	
	while (l != NULL){
		if (val == l->val) return 1;
		l= l->suiv;
		}
	return 0;
}

int est_present_rec (struct liste *l, int val){
	
	if (l == NULL) {
		return 0;
		}
	else {
		if (val == l->val) return 1;
		else{ 
			return est_present_rec (l->suiv, val);
		   }
		}
}

int nb_elem_iter (struct liste *l){
	int taille =0;
	while (l != NULL){
		taille++;
		l = l->suiv;
		}
	return taille;
	}
int nb_elem_rec (struct liste *l){
	if (l != NULL){
		return nb_elem_rec (l->suiv)+1;
		}
	return 0;
	
	//tout le code en une ligne 
	
	// return (l) ? 1 + nb_elem_rec (l) : 0;
	
}


struct liste *inserer_deb (struct liste *l, int val){

	struct liste *tmp = malloc (sizeof (struct liste));
	tmp->val = val;
	tmp ->suiv = l; 
	return tmp;
}

void inserer_deb2 (struct liste **l, int val){

	struct liste *tmp = malloc (sizeof (struct liste));
	tmp->val = val;
	tmp->suiv = *l;
	*l  = tmp; 	
}

struct liste *supprimer_deb (struct liste *l){

	if (l == NULL){
		printf ("supression dans une liste vide\n");
		exit(1);
		}
	else {
		struct liste *deb = l;
		l = l->suiv;
		free (deb);
		return l;
		}
}

void supprimer_deb2 (struct **l){
	
	if (*l == NULL){
		printf ("supression dans une liste vide\n");
		exit(1);
		}
	else {
		struct liste *deb = *l;
		*l = *l->suiv;
		free (deb);
		}
}





