//typedef struct liste liste;
struct liste {
	int val;
	struct liste *suiv;
};

void affiche_iter (struct liste *l);
void affiche_rec (struct liste *l);
int est_present_iter (struct liste *l, int val);
int est_present_rec (struct liste *l, int val);
int nb_elem_iter (struct liste *l);
int nb_elem_rec (struct liste *l);
struct liste *inserer_deb (struct liste *l, int val);
void inserer_deb2 (struct liste **l, int val);
struct liste *supprimer_deb (struct liste *l);
void supprimer_deb2 (struct **l);
