run: bit_array.o main.o
	cc -std=c99 -Wall bit_array.o main.o -o run
main.o: main.c
	cc -std=c99 -Wall -c main.c
bit_array.o: bit_array.h bit_array.c
	cc -std=c99 -Wall -c bit_array.h bit_array.c 

pokus: bit_array.o
	cc -std=c99 -Wall -o pokus bit_array.o
