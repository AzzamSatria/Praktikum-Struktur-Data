#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S) {
    S.Top = 0;
}

bool isEmpty(Stack S) {
    return S.Top == 0;
}

bool isFull(Stack S) {
    return S.Top == 20;
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.Top++;
        S.info[S.Top] = x;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    infotype x = 0;
    if (!isEmpty(S)) {
        x = S.info[S.Top];
        S.Top--;
    } else {
        cout << "Stack kosong!" << endl;
    }
    return x;
}

void printInfo(Stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong." << endl;
    } else {
        for (int i = S.Top; i >= 1; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}

void balikStack(Stack &S) {
    Stack temp;
    createStack(temp);
    while (!isEmpty(S)) {
        push(temp, pop(S));
    }
    S = temp;
}

/*void pushAscending(Stack &S, infotype x) {
    if (isFull(S)) {
        cout << "Stack penuh!" << endl;
        return;
    }
    Stack temp;
    createStack(temp);
    while (!isEmpty(S) && S.info[S.Top] > x) {
        push(temp, pop(S));
    }
    push(S, x);
    while (!isEmpty(temp)) {
        push(S, pop(temp));
    }
}*/

void getInputStream(Stack &S) {
    char c;
    cout << "Masukkan angka: ";
    while(true) {
        c = cin.get();
        if(c == '\n') break;
        if(c >= '0' && c <= '9') { 
            if (!isFull(S)) {
                push(S, c - '0');
            }else{
                cout << "Stack penuh!" << endl;
                break;
            }
        }
    }
}