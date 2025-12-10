#include <iostream>
#include "multilist.h"
using namespace std;

int main(){
    listinduk L;
    CreateList(L);
    address P;
    address_anak C;
    P = alokasi(10);
    insertFirst(L, P);
    P = alokasi(20);
    insertLast(L, P);
    P = alokasi(30);
    insertLast(L, P);

    address induk = findElm(L, 10);
    if(induk != Nil) {
        C = alokasiAnak(101);
        insertLastAnak(induk->lanak, C);
        C = alokasiAnak(102);
        insertLastAnak(induk->lanak, C);
    }

    induk = findElm(L, 20);
    if(induk != Nil) {
        C = alokasiAnak(201);
        insertLastAnak(induk->lanak, C);
    }
    printInfo(L);
    return 0;
}