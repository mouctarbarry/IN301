#include "tabint.h"
#include "stat.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	srand (time (NULL));
	TABINT tab ;
	tab = gen_alea_tabint (20, 20);
	aff_tabint (tab);
	tri_fusion_tabint (tab, 0, 19);
	aff_tabint (tab);
 
 return 0;	
}
