#include <iostream>
using namespace std;

int main() {
    int MHS, MK; MHS=5; MK = 3;
    string nama[5];
    int nilai[5][3];
    float rata_rata[5];

    for (int i = 0; i < MHS; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i+1 << ": ";
        cin >> nama[i];
        int jumlah = 0;
        for (int j = 0; j < MK; j++) {
            cout << "Nilai mata kuliah" << j+1 << " : ";
            cin >> nilai[i][j];
            jumlah = jumlah + nilai[i][j];
        }
        rata_rata[i] = (float)jumlah / MK;
        cout << endl;
    }

    int terbaik = 0;
    for (int i = 1; i < MHS; i++) {
        if (rata_rata[i] > rata_rata[terbaik]) {
            terbaik = i;
        }
    }

    cout << "\nDaftar Nilai Mahasiswa:\n";
    for (int i = 0; i < MHS; i++) {
        cout << nama[i] << "\t";
        for (int j = 0; j < MK; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << "\tRata-rata: " << rata_rata[i];
        if (i == terbaik) {
            cout << " (Terbaik)";
        }
        cout << endl;
    }
    return 0;
}