#if !defined(STACK_H)
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 100

extern int contents[];
extern int top;


void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow();
void stack_underflow();

#endif
