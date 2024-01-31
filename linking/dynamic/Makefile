CFLAGS := -O2

a.out: a.o b.o main.o
	gcc  a.o b.o main.o

a.o: a.c
	gcc $(CFLAGS) -c a.c
b.o: b.c
	gcc $(CFLAGS) -c b.c
main.o: main.c
	gcc $(CFLAGS) -c main.c
clean:
	rm -rf *.o a.out
