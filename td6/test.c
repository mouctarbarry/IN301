#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste.h"

int main (){
srand (time (NULL));
struct  liste *lv = NULL;
struct  liste *l1  =  malloc (sizeof (struct liste));

l1->val = 17;
l1->suiv = NULL;

lv = l1; //c'est lv qu'on va modifier au fur et mesure 
struct liste *l2 = malloc (sizeof (struct liste));
l2->val = 23;
l2->suiv  = l1;
lv = l2;
struct liste *l3 = malloc (sizeof (struct liste));
l3->val = 42;
l3->suiv = l1;
l2->suiv = l3;

affiche_iter (lv);
affiche_rec (lv);

printf ("Nombre d'element en iter: %d\n", nb_elem_iter (lv));
printf ("Nombre d'element en rec: %d\n", nb_elem_rec (lv));

printf ("%d\n", est_present_iter (lv, 23)); 	// on poura faire un code pour afficher VRAI
printf ("%d\n", est_present_rec (lv, 42));		// 						ou FAUX selon le cas  

lv = inserer_deb (lv, 10);
affiche_iter (lv);
inserer_deb2 (&lv, 30);
affiche_iter (lv);

lv = supprimer_deb (lv);
affiche_iter (lv);

lv = inserer_fin_iter (lv, 3);
affiche_iter (lv);

//créons une liste de 10 elements 
struct liste *l10 = malloc (sizeof (struct liste));
int i=0;
while (i<10){
	 l10->val=  rand ()% 100;
	 l10->suiv = malloc (sizeof (struct liste));
	 l10 = l10->suiv;  
	 i++;
	}
	//l10->suiv = NULL;
	//affiche_iter (l10);


lv = inserer_fin_rec (lv, 02);
lv = inserer_fin_rec (lv, 44);
lv = inserer_fin_rec (lv, 58);
affiche_iter (lv);

supprimer_fin_iter (lv);
affiche_iter (lv);

supprimer_fin_rec (lv);
affiche_iter (lv);

printf("sup de 23\n");
supprimer_mil_rec (lv, 23);
affiche_iter (lv);

printf("sup de 17\n");
supprimer_mil_iter (lv, 17);

affiche_iter(lv);
printf ("supp de 10\n");
lv=supprimer_mil_iter (lv, 10);
affiche_iter(lv);

lv = inserer_trie_rec (lv, 4);
lv = inserer_trie_rec (lv, 1);
lv = inserer_trie_rec (lv, 5);
affiche_iter(lv);


return 0;
}














