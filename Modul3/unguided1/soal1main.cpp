#include "soal1datamhs.h"
using namespace std;

int main() {
    Mahasiswa data[10];
    int n;
    cout << "Masukkan jumlah mahasiswa (max 10 orang): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        inputData(data[i]);
    }

    cout << "\n### Daftar Nilai Mahasiswa ###\n";
    for (int i = 0; i < n; i++) {
        tampilData(data[i]);
    }
    return 0;
}
