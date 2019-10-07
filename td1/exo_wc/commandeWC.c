#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// faire un programme qui retourne le nombre 
// de caratères contenus dans un fichier 
// passé en paramètre.

//Léquivalent de la commande wc -c

typedef struct T
{
	int nombre_mot, nombre_caractere, nombre_ligne;
}detaille;

int main(int argc, char const *argv[])
{
	if (argc <2) exit (1);
	FILE *f =NULL;
	f = fopen (argv[1], "r");
	detaille d;
	while (fgetc(f) != EOF ){
		d.nombre_caractere++;
	}
	while (fscanf (f, "%d") != EOF){
		d.nombre_mot++;
	}
	printf("%d mots\n", d.nombre_mot);
	printf("%d caratères\n", d.nombre_caractere);
	fclose (f);
	return 0;
} 