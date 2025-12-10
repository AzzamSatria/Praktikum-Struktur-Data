#include "unguidedDoublylist.h"

void createList(List &L) {
    L.first = NULL;
    L.last = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void printInfo(List L) {
    address P = L.first;
    cout << "DATA LIST 1" << endl;
    while (P != NULL) {
        cout << "no polisi: " << P->info.nopol << endl;
        cout << "warna    : " << P->info.warna << endl;
        cout << "tahun    : " << P->info.thnBuat << endl;
        P = P->next;
    }
}

void insertLast(List &L, address P) {
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

address findElm(List L, string nopol) {
    address P = L.first;
    while (P != NULL && P->info.nopol != nopol) {
        P = P->next;
    }
    return P;
}

void deleteFirst(List &L, address &P) {
    if (L.first == NULL) {
        P = NULL;
    } else if (L.first == L.last) {
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    } else {
        P = L.first;
        L.first = P->next;
        L.first->prev = NULL;
        P->next = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L.first == NULL) {
        P = NULL;
    } else if (L.first == L.last) {
        P = L.last;
        L.first = NULL;
        L.last = NULL;
    } else {
        P = L.last;
        L.last = P->prev;
        L.last->next = NULL;
        P->prev = NULL;
    }
}

void deleteAfter(address nodeSebelum, address &P) {
    if (nodeSebelum != NULL && nodeSebelum->next != NULL) {
        P = nodeSebelum->next;
        nodeSebelum->next = P->next;
        if (P->next != NULL) {
            P->next->prev = nodeSebelum;
        }
        P->next = NULL;
        P->prev = NULL;
    } else {
        P = NULL;
    }
}
