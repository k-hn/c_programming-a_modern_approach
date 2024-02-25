remind: readline.o remind.o
	clang -o remind readline.o remind.o

readline.o: readline.c readline.h
	clang -c readline.c

remind.o: remind.c readline.h
	clang -c remind.c
