prog: main.o create.o
	gcc main.o create.o -o prog
main.o: main.c
	gcc -c main.c
create.o: create.c
	gcc -c create.c
clean:
	rm *.o prog
