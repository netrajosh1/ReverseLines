revlines: main.o readlines.o reorder.o
	gcc -o revlines main.o readlines.o reorder.o
main.o: main.c header20.h
	gcc -c main.c
readlines.o: readlines.c
	gcc -c readlines.c
reorder.o: reorder.c
	gcc -c reorder.c
