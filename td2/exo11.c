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
	//printf("int [] %ld octets\n", sizeof (int[]));
	printf("int[10] %ld octets\n", sizeof (int[10]));
	printf("int** %ld octets\n", sizeof (int**));
	return 0;
}