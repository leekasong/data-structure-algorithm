#ifndef __STACK_H_
#define __STACK_H_

typedef int T;
#define MAX_STACK_SIZE	1024
//init
//push
//pop
//peek
//clear
//empty
//Full

T g_stack_array[MAX_STACK_SIZE];

int g_sp;
void stack_init();
void push(T data);
void pop();
T peek();
void clear();
int isFull();
int isEmpty(); // empty : 1, otherwise 0

#endif
