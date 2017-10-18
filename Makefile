principal: hadamar.o main.o
	gcc -o principal hadamar.o main.o

hadamar.o: hadamar.c
	gcc -o hadamar.o -c hadamar.c -Wall -O

main.o: main.c hadamar.h
	gcc -o main.o -c main.c -Wall -O