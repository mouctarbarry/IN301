#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>


// #####
// 1. Génération, suppression et affichage de tableaux
// #####
TABINT gen_alea_tabint (int N, int K) {
	TABINT Tab;
	Tab.N = N;
	Tab.T = malloc ( N*sizeof(int));
	for (int i=0; i<N; i++)
		{
			Tab.T[i] = rand ()%K;
		}
	return Tab;
}

TABINT sup_tabint (TABINT T) {
	free (T.T);
	return T;
	
}

void aff_tabint (TABINT T) {
	for (int i=0; i<T.N;i++){
		printf ("%d \n", T.T[i]); 
		}
}

// #####
// 2. Manipulation des valeurs du tableau
// #####

// Echange la case i et la case i+1 si la case i est > à la case i+1
 void ech_tabint (TABINT T, int i) {
	int tmp;
	if (i>= T.N-1){ 
		printf ( "Positionement trop grand\n"); 
		exit (1);
	}
	if (T.T[i]> T.T[i+1]) {
		tmp = T.T[i];
		T.T[i]= T.T[i+1];
		T.T[i+1] = tmp;
		echange++;
		}
	}

void scan_ech_tabint (TABINT T, int fin)  {
	for (int i=0; i<fin; i++){
		ech_tabint (T, i); 
		comp ++;
		}	
}














