#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED
#include <iostream>
#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList{
    infotype info;
    address next;
};
struct List{
    address first;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void insertFirst(List &L, address P);
void printInfo(List L);

address findElm(List L, infotype X);
int sumInfo(List L);
#endif
