#include <stdio.h>
#include <stdlib.h>

int  main (){
	int T[7][3];
	printf ("val de T:           %p\n", T);
	printf ("adresse de T[0][0]: %p\n", &T[0][0]);
	printf ("adresse de T[0][1]: %p\n", &T[0][1]);
	printf ("adresse de T[0][2]: %p\n", &T[0][2]);
	printf ("adresse de T[1][0]: %p\n", &T[1][0]);
	printf ("adresse de T[1][1]: %p\n", &T[1][1]);
}
