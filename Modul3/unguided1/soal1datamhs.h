#ifndef DATA_MAHASISWA_H_INCLUDED
#define DATA_MAHASISWA_H_INCLUDED

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, nim;
    float uts, uas, tugas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputData(Mahasiswa &m);
void tampilData(Mahasiswa m);
#endif
