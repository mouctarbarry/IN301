#include "tableau.h"
#include <string.h>

//associe à chaque caractere un indice dans le tableau des frequences
//les caractes possible sont les caracteres alphabetiques en minuscules et le caractere de fin de chaine '\0'
int indice(char c){
  if (c== '\n') return 0;
  return c - 'a'+1;
}


//tri le tableau  selon la composante i
void tri_base_indice(Tableau t, int i){
  //a ecrire
  int *frequences = calloc (sizeof (int),27);
  for (int j = 0; j < t.n; j++){
	  frequences [indice (t.tab[j][i])]++;
	  }
	int *frequences_cumul = calloc (sizeof (int),27);
  for (int j= 1; j<27; j++){
	  frequences_cumul [j] = frequences_cumul [j-1] + frequences [j-1];
	  } 
	  Tableau tmp = copy_tab (t);
	  for(int j =0; j< t.n; j++){
		  tmp.tab[frequences_cumul[indice(t.tab[j][i])]] = t.tab[j];
		  frequences_cumul[indice(t.tab[j][i])]++;
		  }
	  for (int j= 0; j<t.n; j++){
		  t.tab[j] = tmp.tab[j];
		  }
	free (frequences); free (frequences_cumul);
}
 
//tri par base 
void tri_base(Tableau t){
  int i;
  for(i=t.taille-1; i>=0; i--)
    tri_base_indice(t, i);
}

int partition (Tableau t, int g, int d){
		int i= g + 1, j= d;
		while (i<j){
			while (strcmp (t.tab[i], t.tab[g]) <= 0 && i <= d){i++;}
			while (strcmp (t.tab[j], t.tab[g]) > 0 && j > g){j--;}
			if (i<j){
				char *tmp = t.tab[i];
				t.tab[i] = t.tab[j];
				t.tab[j] = tmp;
				i++; j--;
				} 
			}
		char *tmp = t.tab[j];
		t.tab[j] = t.tab[g];
		t.tab[g] = tmp;
		
return j;
}


//tri le tableau entre indices g et d compris
void tri_rapide(Tableau t, int g, int d){
  //a ecrire
	if (d - g >1){
		int pos = partition (t, g, d);
		tri_rapide (t, g, pos-1);
		tri_rapide (t, pos+1, d);
	  }
  }


//tri par comparaison en utilisant la fonction strcmp
void tri_cmp(Tableau t){
  tri_rapide(t, 0, t.n-1);
}
