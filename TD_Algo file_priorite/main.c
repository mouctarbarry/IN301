#include <stdlib.h>
#include <stdio.h>
#include "file.h"
int main (int argc, char **argv){
	File f = creer_file ();
	affiche_file (f);
	f = enfile (f, 10);
	affiche_file (f);
	f = enfile (f, 11);
	f = enfile (f, 12);
	f = enfile (f, 133);
	affiche_file(f);
	int a= defile (&f);
	printf ("%d\n", a);
	affiche_file(f);
	
}
