#include "unguidedDoublylist.h"

int main() {
    List L;
    createList(L);
    address P;

    infotype K1 = {"D001", "hitam", 90};
    infotype K2 = {"D003", "putih", 70};
    infotype K3 = {"D004", "kuning", 90};

    insertLast(L, alokasi(K1));
    insertLast(L, alokasi(K2));
    insertLast(L, alokasi(K3));
    printInfo(L);

    cout << "\nMencari kendaraan dengan nopol : D001" << endl;
    P = findElm(L, "D001");
    if (P != NULL) {
        cout << "nomor polisi: " << P->info.nopol << endl;
        cout << "warna       : " << P->info.warna << endl;
        cout << "tahun       : " << P->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    cout << "\nMenghapus kendaraan dengan nomor polisi D003" << endl;
    P = findElm(L, "D003");
    if (P == L.first) {
        deleteFirst(L, P);
    } else if (P == L.last) {
        deleteLast(L, P);
    } else {
        deleteAfter(P->prev, P);
    }
    dealokasi(P);
    cout << "Data dengan nomor polisi D003 berhasil dihapus." << endl;
    printInfo(L);
    return 0;
}
