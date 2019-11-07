run: compile
	./exec
compile: main.o file.o
	gcc main.o file.o -o exec
	
main.o: main.c
	gcc -c -Wall -g main.c
	
file.o: file.c
	gcc -c -Wall -g file.c

clean:
	rm exec
	rm *.o
	ls
