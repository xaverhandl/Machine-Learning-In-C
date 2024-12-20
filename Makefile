all: main
	./main

main: main.o load_data.o
	gcc -o main main.o load_data.o

main.o: main.c
	gcc -c main.c -o main.o
load_data.o: load_data.c
	gcc -c load_data.c -o load_data.o

