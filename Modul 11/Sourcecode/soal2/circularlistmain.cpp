#include <iostream>
#include "circularlist.h"
using namespace std;

address createData(string nama, string nim, char jk, float ipk) {
    infotype x;
    x.nama = nama;
    x.nim = nim;
    x.jenis_kelamin = jk;
    x.ipk = ipk;
    return alokasi(x);
}

int main() {
    List L;
    address P, Prec;
    infotype x;

    createList(L);
    cout << "Coba insert first, last, dan after" << endl;
    P = createData("Danu", "04", 'l', 4.0);
    insertFirst(L, P);

    P = createData("Fahmi", "06", 'l', 3.45);
    insertLast(L, P);

    P = createData("Bobi", "02", 'l', 3.71);
    insertFirst(L, P);

    P = createData("Ali", "01", 'l', 3.3);
    insertFirst(L, P);

    P = createData("Gita", "07", 'p', 3.75);
    insertLast(L, P);

    x.nim = "07";
    Prec = findElm(L, x);
    P = createData("Cindi", "03", 'p', 3.5);
    insertAfter(L, Prec, P);

    x.nim = "02";
    Prec = findElm(L, x);
    P = createData("Hilmi", "08", 'l', 3.3);
    insertAfter(L, Prec, P);

    x.nim = "04";
    Prec = findElm(L, x);
    P = createData("Eli", "05", 'p', 3.4);
    insertAfter(L, Prec, P);
    printInfo(L);
    return 0;
}
