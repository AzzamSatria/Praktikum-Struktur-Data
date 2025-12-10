#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah bilangan: ";
    cin >> N;

    int *arr = new int[N];   
    int *p = arr;            

    for (int i = 0; i < N; i++) {
        cout << "Bilangan ke-" << i+1 << ": ";
        cin >> *(p + i);     
    }
    int jumlah, maksimum, minimum; jumlah = 0; maksimum = *p; minimum = *p;
   
    for (int i = 0; i < N; i++) {
        int nilai = *(p + i);
        jumlah = jumlah + nilai;
        if (nilai > maksimum) maksimum = nilai;
        if (nilai < minimum) minimum = nilai;
    }

    cout << "\nJumlah = " << jumlah << endl;
    cout << "Nilai maksimum = " << maksimum << endl;
    cout << "Nilai minimum = " << minimum << endl;

    delete[] arr; 
    return 0;
}