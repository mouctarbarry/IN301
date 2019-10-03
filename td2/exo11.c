#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	printf("int %ld octets\n", sizeof (int));
	printf("char %ld octets\n", sizeof (char));
	printf("int* %ld octets\n", sizeof (int*));
	printf("char* %ld octets\n", sizeof (char*));
	printf("double %ld octets\n", sizeof (double));
	printf("char[7][3] %ld octets\n", sizeof (char[7][3]));
	printf("void* %ld octets\n", sizeof (void*));
	//printf("int [] %d octets\n", sizeof (int[])); ici ça marche pas parce
	printf("int[10] %ld octets\n", sizeof (int[10]));
	printf("int** %ld octets\n", sizeof (int**));
	
	printf ("Les contenus\n");  // tab; tab[0]; &tab[0]; *&tab; *&tab[0]
	float tab[10];
	printf (" contenu de tab : %p\n", tab);
	printf ("taille de tab : %ld\n", sizeof(tab));
	printf ("contenu de tab[0] %f\n", tab[0]);
	printf ("contenu de &tab : %p\n", &tab[0]);
	printf ("taille de &tab[0] : %ld\n", sizeof (&tab[0]));
	
	
	return 0;
}
