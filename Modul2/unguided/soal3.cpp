#include <iostream>
using namespace std;

float hitung_rata_rata(int data[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += data[i];
    }
    return (float)jumlah / n;
}

int cari_maksimum(int data[], int n) {
    int maks = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > maks) maks = data[i];
    }
    return maks;
}

int cari_minimum(int data[], int n) {
    int min = data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] < min) min = data[i];
    }
    return min;
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;
    int nilai[100]; 

    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i+1 << ": ";
        cin >> nilai[i];
    }

    float rata = hitung_rata_rata(nilai, N);
    int tertinggi = cari_maksimum(nilai, N);
    int terendah = cari_minimum(nilai, N);

    cout << "\nRata-rata kelas = " << rata << endl;
    cout << "Nilai tertinggi = " << tertinggi << endl;
    cout << "Nilai terendah = " << terendah << endl;
    return 0;
}