#define TAILLE_FILE 100

typedef struct file File;
struct file {
	int *contenu; // tableau des element
	int debut; 	 // indice de l'element le plus encien
	int taille;  // taille de la file  
	};
struc element {
	int id; 
	int prio;
}elem;
	
File creer_file();
int est_vide (File f);
File enfile (File f, int x);
int defile (File *f);
void affiche_file (File f);
