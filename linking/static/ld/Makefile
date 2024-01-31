a.out: a.o b.o main.o
	ld  a.o b.o main.o

a.o: a.c
	gcc -c a.c
b.o: b.c
	gcc -c b.c
main.o: main.c
	gcc -c main.c
clean:
	rm -rf *.o a.out
