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

/*void supprimer_deb2 (struct liste **l){
	
	if (*l == NULL){
		printf ("supression dans une liste vide\n");
		exit(1);
		}
	else {
		struct liste *deb = *l;
		*l = *l->suiv;
		free (deb);
		}
}*/

struct liste *inserer_fin_iter (struct liste *l, int val){
	
	struct liste *tmp = malloc (sizeof (struct liste));
	tmp->val = val; 
	tmp->suiv = NULL;
	if (!l){
		return tmp;
		}
	struct liste *temp = l;
	while (temp->suiv){
		temp = temp->suiv;
		}
	temp->suiv = tmp;
	return l;
}

struct liste *inserer_fin_rec (struct liste *l, int val){
	
	if (!l) {
		return  (inserer_deb (l, val));
		}
	l->suiv = inserer_fin_rec(l->suiv, val);
	return l;
}

struct liste *supprimer_fin_iter (struct liste *l){
	
	if (!l) {
		printf ("Impossible de supprimer dans une liste vide");
		exit (1);
		}
	if (!l->suiv){
		free (l);
		return NULL;
		}
	struct liste *tmp = l;
	while (tmp->suiv->suiv) {
		tmp = tmp->suiv;
		}
	free (tmp->suiv);
	tmp->suiv = NULL;
  return tmp;
}

struct liste *supprimer_fin_rec (struct liste *l){
	
	if (!l) return NULL;
	if (!l->suiv) {
		free (l);
		return NULL;
		} 
	l->suiv = supprimer_fin_rec (l->suiv);
	return l;
}

struct liste *supprimer_mil_iter (struct liste *l, int val){
	
	if (!l) return NULL;
	if (l->val == val){
		struct liste *tmp = l->suiv;
		free (l); 
		return tmp;
		} 
	struct liste *tmp =l;
	while (tmp->suiv && (tmp->suiv)->val != val){
		tmp = tmp->suiv ;
		} 
	// s'arrete quand on point soit sur un element précedent un element de valeur val
	// soit sur le dernier element si il y'a pas d'element de valeur val
	if (!tmp->suiv){ return l;}
	struct liste *add_sup = tmp->suiv;
	tmp->suiv = tmp->suiv->suiv;
	free (add_sup);
	
return l;
}


struct liste *supprimer_mil_rec (struct liste *l, int val){
	if (!l) return NULL;
	if (l->val == val){
			 return supprimer_deb (l);
			}
	l->suiv = supprimer_mil_rec (l->suiv, val);
	return l;
}

struct liste *inserer_trie_iter (struct liste *l, int val){
	
	if (!l || l->val >= val) inserer_deb (l, val);
	struct liste *tmp = l;
	while (tmp->suiv && tmp->val <= val){
		tmp = tmp->suiv;
		} 
	tmp -> suiv = inserer_deb (tmp->suiv, val);
	
  return l;	
}
struct liste *inserer_trie_rec (struct liste *l, int val){
	
	if (!l || l->val >= val) return (inserer_deb(l, val));
	l->suiv = inserer_trie_rec (l->suiv, val);
	return l;	
}


struct liste *retourner (struct liste *l){
	
	if (!l || !l->suiv) return l;
	struct liste *tmp = l->suiv;
	struct liste *res  = retourner (l->suiv);
	tmp->suiv = l;
	l-suiv = NULL;
	return res;

}





























