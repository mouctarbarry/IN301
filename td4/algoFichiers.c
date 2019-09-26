#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int tailleIter (char * chaine ){
	int i;
	for (i=0; chaine[i] != '\0'; i++){}
	return i; 
	}

int tailleRec (char* chaine){
	if (chaine[0]=='\0') return 0;
	return tailleRec (chaine+1) +1;
	}
int compare (char *chaine1, char *chaine2){
	int i=0;
	while (chaine1[i] != '\0' || chaine2[i] != '\0'){ 
	   if (chaine1[i] == chaine2[i]) return 0;
	   if (chaine1[i] <  chaine2[i]) return -1;
	   else return 1;
	 i++;
	   }
	}

int main (int argc, char** argv){
	if (argc <2) exit (1);
	int i;
	for (i=1; i<argc; i++){
		printf ("La taille de #%s# est : %d\n",argv [i], tailleRec( argv[i]) );
		}
	printf ("%d\n", compare (argv[1], argv[2])); 
	
	}












