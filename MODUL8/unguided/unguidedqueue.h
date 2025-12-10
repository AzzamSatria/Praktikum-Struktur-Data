#ifndef QUEUE_H
#define QUEUE_H

const int Max = 5;
typedef int infotype;

struct Queue {
    infotype info[Max];
    int head;
    int tail;
    int count;
};

void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);
bool isFullQueue(Queue Q);
void enqueue(Queue &Q, infotype x);
infotype dequeue(Queue &Q);
void printInfo(Queue Q);
#endif