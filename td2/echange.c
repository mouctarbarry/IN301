#include <stdio.h>

void echange (int *a, int *b){
	int *tmp=0;
	tmp=a;
	a=b;
	b=tmp;
	} 

int main (){
	int a=10;
	int b=12;
	echange (&a, &b);
	printf ("%d %d\n", a, b);
}
