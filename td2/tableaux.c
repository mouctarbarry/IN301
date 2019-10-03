#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>



int *allouer (){
	int *T = malloc (10*sizeof(int));
	int i=0;
	for (; i<10;i++){
		T[i]= rand()%20;
		}
	return T;
}

void afficher (int * t){
	for (int i=0; i<10;i++){
		printf ("%d ", t[i]);
	}
	printf ("\n");
}

int produit (int *t){
	long int produit=1;
	for (int i=0; i<10; i++){
		produit*= t[i];
		}
	return produit;
}

int min (int *t){
	int i=0;
	int min=t[i];
	for (; i<10; i++){
		if (t[i]>t[i+1]) min=t[i+1];
		}
	return min;
}

void decalage (int *t){
	int i=10;
	for (; i>1; i--){
		t[i]=t[i-1];
	}
}
int * init_croissant (){
	int *t = malloc (10*sizeof (int));
	int i=0;
	t[0] =rand() %10;
	 for (; i<10; i++){
		 t[i]= t[i-1]+ rand ()%10;
		}
	return t; 
}

int main (){
	srand (getpid());
	int *t = allouer();
	afficher (t);
	printf ("Produit des elements: %d\n", produit (t));
	printf ("L'element mminimal du tableau: %d\n", min(t));
	decalage (t);
	afficher (t);
	int *tt= init_croissant();
	printf ("initialisation croissante\n");
	afficher (tt);

}
