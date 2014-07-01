all:hello.c
	gcc -o hello hello.c
preprocess:
	gcc -o hello.p -E hello.c
compile:
	gcc -S hello.c
assemble:
	gcc -c hello.c
clean:
	rm hello hello.p hello.s hello.o

