#include <iostream>
#include "unguidedqueue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return(Q.head == -1 && Q.tail == -1);
}
bool isFullQueue(Queue Q) {
    return(Q.tail == Max - 1);
}

void enqueue(Queue &Q, infotype x) {
    if(isFullQueue(Q)) {
        cout << "Queue Penuh" << endl;
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
    infotype temp;

    if(isEmptyQueue(Q)) {
        cout << "Queue Kosong" << endl;
        return -1;
    }else{
        temp = Q.info[0];
        for(int i = 0; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
        if(Q.tail < 0) {
            Q.head = -1;
            Q.tail = -1;
        }
        return temp;
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";
    if(!isEmptyQueue(Q)) {
        for (int i = 0; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
    }else{
        cout << "empty queue";
    }
    cout << endl;
}