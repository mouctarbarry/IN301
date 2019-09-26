run: genere lecture
	./genere
	./lecture
genere: genere.c	
	gcc -o genere -g -Wall genere.c
lecture: algos.c
	gcc -o lecture -g -Wall algos.c
	
clean: 
	rm genere lecture
