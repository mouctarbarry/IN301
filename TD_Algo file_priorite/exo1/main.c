#include <stdlib.h>
#include <stdio.h>
#include "file.h"
int main (int argc, char **argv){
	File f = creer_file ();
	affiche_file (f);
	elem x, y, z;
	x.id = 1; x.prio =10;
	y.id = 2; y.prio = 22;
	z.id = 3; z.prio = 30;
	f = enfile (f, x); 
	affiche_file (f);
	f = enfile (f, y);
	f = enfile (f, z);
	affiche_file(f);
	elem a = defile (&f);
	printf ("elements suppeimés: (%d, %d)\n", a.id, a.prio);
	affiche_file(f);
	
}
