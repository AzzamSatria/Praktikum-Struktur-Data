#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
typedef int infotype;

struct Stack {
    infotype info[20];
    int Top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void pushAscending(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
//void pushAscending(Stack &S, infotype x);
void getInputStream(Stack &S);
#endif