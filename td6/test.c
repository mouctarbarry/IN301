#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main (){

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
return 0;
}
