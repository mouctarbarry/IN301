#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// faire un programme qui retourne le nombre 
// de caratères contenus dans un fichier 
// passé en paramètre.

//Léquivalent de la commande wc -c


int main(int argc, char const *argv[])
{
	if (argc <2) exit (1);
	FILE *f =NULL;
	f = fopen (argv[1], "r");
	int cpt =0;
	while (fgetc(f) != EOF ){
		cpt++;
	}
	printf("%d\n", cpt);
	return 0;
} 