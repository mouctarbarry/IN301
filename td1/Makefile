run: genere lecture
	./genere
	./lecture
genere: genere.c	
	gcc -o genere -Wall genere.c
lecture: algos.c
	gcc -o lecture -Wall algos.c
	
clean: 
	rm genere lecture
