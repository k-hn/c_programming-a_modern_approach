stack: stack.o main.o
	clang -o stack stack.o main.o

stack.o: stack.c stack.h
	clang -c stack.c

main.o: main.c stack.h
	clang -c main.c
