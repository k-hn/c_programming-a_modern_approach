demo: main.o f1.o f2.o
	clang -o demo main.o f1.o f2.o

main.o: main.c f1.h
	clang -c main.c

f1.o: f1.c f1.h f2.h
	clang -c f1.c

f2.o: f2.c f1.h f2.h
	clang -c f2.c
