#include <iostream>
#include "unguidedqueue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = 0;
    Q.tail = 0;
    Q.count = 0;
}

bool isEmptyQueue(Queue Q) {
    return(Q.count == 0);
}
bool isFullQueue(Queue Q) {
    return(Q.count == Max);
}

void enqueue(Queue &Q, infotype x) {
    if(isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
    }else{
        Q.info[Q.tail] = x;
        Q.tail = (Q.tail + 1) % Max;
        Q.count++;
    }
}

infotype dequeue(Queue &Q) {
    if(isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }else{
        infotype temp = Q.info[Q.head];
        Q.head = (Q.head + 1) % Max;
        Q.count--;
        return temp;
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t| ";
    if(!isEmptyQueue(Q)) {
        int idx = Q.head;
        for (int i = 0; i < Q.count; i++) {
            cout << Q.info[idx] << " ";
            idx = (idx + 1) % Max;
        }
    }else{
        cout << "Empty queue";
    }
    cout << endl;
}