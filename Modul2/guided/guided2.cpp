#include <iostream>
#define MAX 5 //ukuran array ditetapkan sebagai
using namespace std;

int main() {
    int i, j;
    float nilai[MAX]; //array dimensi 1
    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    cout << "=== Input Nilai Siswa ===\n";  //input data array dimensi
    for (i = 0; i < MAX; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\n=== Data Nilai Siswa ===\n"; //Menampilkan isi array 1 dimensi
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }
  
    cout << "\n===  Nilai Tahunan ===\n";  //Menampilkan isi array 1 dimensi
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}