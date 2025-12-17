#include "unguidedsinglylist.h"

void createList(List &L){
    L.first = Nil;
}
address alokasi(infotype x){
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}
void dealokasi(address &P){
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P){
    P->next = L.first;
    L.first = P;
}
void printInfo(List L){
    address P = L.first;
    if (P == Nil){
        std::cout << "List kosong!" << std::endl;
    }else{
        while (P != Nil){
            std::cout << P->info << " ";
            P = P->next;
        }
        std::cout << std::endl;
    }
}
address findElm(List L, infotype X){
    address P = L.first;
    while (P != Nil && P->info != X){
        P = P->next;
    }
    return P;
}

int sumInfo(List L){
    int total = 0;
    address P = L.first;
    while (P != Nil){
        total += P->info;
        P = P->next;
    }
    return total;
}
