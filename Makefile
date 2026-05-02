all: task

task: main.o person.o
	gcc -o task main.o person.o

main.o: src/main.c
	gcc -c src/main.c -Iinclude

person.o: src/person.c
	gcc -c src/person.c -Iinclude

clean:
	rm -f *.o task