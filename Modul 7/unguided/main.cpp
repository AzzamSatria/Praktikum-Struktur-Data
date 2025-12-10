#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    cout << "Hello world!" << endl;
    Stack S;
    createStack(S);
    
    /*pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pop(S);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pop(S);
    pushAscending(S, 9);*/

    getInputStream(S);
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
    return 0;
}