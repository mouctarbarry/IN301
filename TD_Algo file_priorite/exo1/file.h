#define TAILLE_FILE 100
	
typedef struct file File;
typedef struct element elem;	
struct file {
	elem *contenu; // tableau des element
	int debut; 	 // indice de l'element le plus encien
	int taille;  // taille de la file  
	};
struct element {
	int id; 
	int prio;
};
typedef struct element elem;	
File creer_file();
int est_vide (File f);
File enfile (File f, elem x);
elem defile (File *f);
void affiche_file (File f);
