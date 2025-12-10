#include <iostream>
#include "unguidedqueue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return(Q.tail < Q.head);
}
bool isFullQueue(Queue Q) {
    return(Q.tail == Max - 1);
}

void enqueue(Queue &Q, infotype x) {
    if(isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    }else{
        if(isEmptyQueue(Q)) {
            Q.head = 0;
            Q.tail = 0;
        }else{
            Q.tail++;
        }
        Q.info[Q.tail] = x;
    }
}

infotype dequeue(Queue &Q) {
    if(isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }else{
        infotype temp = Q.info[Q.head];
        Q.head++;

        if(Q.head > Q.tail) {
            Q.head = 0;
            Q.tail = -1;
        }
        return temp;
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";
    if(!isEmptyQueue(Q)) {
        for (int i = Q.head; i <= Q.tail; i++) {
             cout << Q.info[i] << " ";
        }
    }else{
        cout << "Empty queue";
    }
    cout << endl;
}