#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// faire un programme qui retourne le nombre 
// de caratères contenus dans un fichier 
// passé en paramètre.

int main(int argc, char const *argv[])
{
	int T=0;
	if (argc <2) exit (1);
	FILE *f =NULL;
	f = fopen (argv[1], "r");
	int cpt =0;
	while (fscanf(f, "%d", &T) != EOF ){
		cpt++;
	}
	printf("%d\n", cpt);
	return 0;
} 