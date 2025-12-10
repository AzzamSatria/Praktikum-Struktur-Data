#include "soal1datamhs.h"

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

void inputData(Mahasiswa &m) {
    cout << "Nama   : "; cin >> m.nama;
    cout << "NIM    : "; cin >> m.nim;
    cout << "UTS    : "; cin >> m.uts;
    cout << "UAS    : "; cin >> m.uas;
    cout << "Tugas  : "; cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilData(Mahasiswa m) {
    cout << m.nama << " (" << m.nim << ") - Nilai Akhir: " << m.nilaiAkhir << endl;
}
