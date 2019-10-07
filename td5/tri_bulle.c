
#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tri_bulle_tabint (TABINT T){
 	for (int i =0; i<T.N; i++){
		 scan_ech_tabint (T, T.N-1);
		}
}

struct stat stat_moy (int N, int A){
	TABINT tab;
	struct stat nc;
	comp = 0;
	echange = 0;
	for(int i= 0; i<A; i++){
		tab = gen_alea_tabint(N, 100);
		tri_bulle_tabint(tab);
		sup_tabint(tab);
		}
	
	nc.nb_moy_comp = (float)comp/A;
	nc.nb_moy_ech = (float)echange/A;
	return nc;
}

int main() {
	srand (time(NULL));
	/*TABINT tab;
	tab = gen_alea_tabint (10, 100);
	aff_tabint (tab);
	printf ("\n\n");
	tri_bulle_tabint (tab);
	aff_tabint (tab);
	printf ("\n\n");*/
	struct stat nc;
	//printf (" comp  %d echange  %d\n", comp, echange);
	nc = stat_moy(10, 5);
	printf("nb comp  %f nb echg %f \n", nc.nb_moy_comp, nc.nb_moy_ech);
	
	//sup_tabint(tab);
	
	// Le code ci-dessous est provisoire, juste pour faire marche l'enchainement du Makefile
	FILE *F;
	F = fopen("test_tri_bulle.data","w");
	fprintf(F,"   10           45.00           21.97\n");
 	fprintf(F,"   12           66.00           33.08\n");
 	fprintf(F,"   14           91.00           46.35\n");
 	fprintf(F,"   16          120.00           61.08\n");
 	fprintf(F,"   19          171.00           85.71\n");
 	fprintf(F,"   22          231.00          115.62\n");
 	fprintf(F,"   26          325.00          162.21\n");
	fclose(F);
	// Fin du code provisoire
	exit(0);
}
