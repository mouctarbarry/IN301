#include "tableau.h"
#include <string.h>

//associe à chaque caractere un indice dans le tableau des frequences
//les caractes possible sont les caracteres alphabetiques en minuscules et le caractere de fin de chaine '\0'
int indice(char c){
  return 0;
}


//tri le tableau  selon la composante i
void tri_base_indice(Tableau t, int i){
  //a ecrire
}



 
//tri par base 
void tri_base(Tableau t){
  int i;
  for(i=t.taille-1; i>=0; i--)
    tri_base_indice(t, i);
}




//tri le tableau entre indices g et d compris
void tri_rapide(Tableau t, int g, int d){
  //a ecrire
}


//tri par comparaison en utilisant la fonction strcmp
void tri_cmp(Tableau t){
  tri_rapide(t, 0, t.n-1);
}
