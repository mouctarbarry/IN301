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
		printf ("%d ", T.T[i]); 
		}
	printf ("\n");
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

void fusion (TABINT T, int deb, int mil, int fin ){
	int *tmp = malloc (sizeof (int)* (fin-deb) );
	int i = deb;
	int j = fin; 
	int k = 0;
	while (k < fin - deb){
		if (i== mil){
			for (; j<fin;j++){
				tmp[k] = T.T[j];
				k++;
				}
				break;
		}
		if (j== fin){
			for (; i<mil; i++){
				tmp[k] = T.T[i];
				k++;
				}
			break;
		}
			if (T.T[i] < T.T[j]){
				tmp[k] = T.T[i];
				i++; 
				} 
			else{
				tmp[k] = T.T[j];
				j++; 
				}
			k++;
		}
		for (i = 0; i < fin - deb; i++){
			T.T[i+deb] = tmp [i];
			}
	
}

tri_fusion_tabint (TABINT T, int deb, int fin ){
		if ((fin - deb ) > 1){
			tri_fusion_tabint (T, deb, (fin + deb)/2 );
			tri_fusion_tabint (T, (fin + deb)/2, fin);
			fusion (T, deb, (fin + deb)/2, fin);
		}
}













