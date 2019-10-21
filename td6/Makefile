run: compile
	./test
	
compile: liste.o  test.o
	gcc liste.o test.o -o test 

liste.o: liste.c liste.h
	gcc  -c -Wall liste.c
	
test.o: test.c
	gcc -c -Wall test.c 

 
clean: 
	rm *.o
	rm test 
