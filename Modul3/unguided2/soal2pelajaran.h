#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED
#include <iostream>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran createPelajaran(string namapel, string kodepel);
void tampilPelajaran(pelajaran pel);
#endif
