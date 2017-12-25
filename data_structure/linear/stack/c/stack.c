#include "stack.h"

extern T g_sp;
void stack_init(){
	g_sp = -1;
}

void push(T data){
	if(isFull()) return;
	g_stack_array[++g_sp] = data;	
}

void pop(){
	if(isEmpty()) return;
	g_sp--;
}

T peek(){
	if(isEmpty()) return -1;
	return g_stack_array[g_sp]; 

}
void clear(){
	g_sp = -1;
}

int isEmpty(){
	return g_sp < 0;
}

int isFull(){
	return g_sp == MAX_STACK_SIZE;
}
