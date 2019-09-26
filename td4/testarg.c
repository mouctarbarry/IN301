#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int testnombre (char * chaine) {
	int i= 0;
	if (chaine[i]== '-') i++;
	
	for (; i< strlen (chaine); i++){
		if (chaine[i] == '.') {  i++; break; } 
		if (!isdigit(chaine[i])) return 0;
	} 
	for (; i< strlen (chaine); i++){
		if (!isdigit(chaine[i])) return 0;
	}
	return 1;
}

int main( int argc, char** argv){
	int i;
	double somme=0;
	printf("argc = %d\n", argc);
	
	for(i=1 ; i<argc ; i++){
		if (testnombre (argv[i])){
			somme += atof (argv[i]);
			}
		}
	printf ("%2f\n", somme);
	
	return 0;
}
