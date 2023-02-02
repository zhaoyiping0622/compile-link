all: main1 main2

%.o: %.c
	gcc -c -o $@ $<

liba.a: a1.o a2.o
	ar rcs $@ $?

libb.a: b.o
	ar rcs $@ $?

main1: main.o liba.a
	gcc -o $@ main.o -L. -la

main2: main.o libb.a
	gcc -o $@ main.o -L. -lb

clean:
	rm -f *.o *.a main1 main2
