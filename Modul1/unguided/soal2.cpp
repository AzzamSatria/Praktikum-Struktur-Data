#include <iostream>
#include <string>
using namespace std;
//WM : 103112400112_Muhammad Azzam Satria
string satuan[] = {
    "nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan", "sepuluh","sebelas",
    "dua belas","tiga belas","empat belas","lima belas", "enam belas","tujuh belas","delapan belas","sembilan belas"
};

string puluhan[] = {
    "","","dua puluh","tiga puluh","empat puluh","lima puluh",
    "enam puluh","tujuh puluh","delapan puluh","sembilan puluh"
};

string ubahTulisan(int n) {
    if (n < 20) return satuan[n];               
    else if (n < 100) {                          
        int p = n / 10;
        int s = n % 10;
        if (s == 0) return puluhan[p];
        else return puluhan[p] + " " + satuan[s];
    } else if (n == 100) return "seratus";      
    else return "bukan angka 0-100";             
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    cout << angka << " : " << ubahTulisan(angka) << endl;
    return 0;
}

// output nilai angka tersebut dalam bentuk tulisan