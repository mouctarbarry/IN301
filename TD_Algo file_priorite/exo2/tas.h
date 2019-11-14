#ifndef __TAS_
#define __TAS_
#define T_MAX 20

typedef struct tas TAS;
struct tas {
	int *contenu;
	int taille;
};
TAS creer_tah();
void afficher_tas(TAS T);
void inserer (TAS T, int val);
#endif
