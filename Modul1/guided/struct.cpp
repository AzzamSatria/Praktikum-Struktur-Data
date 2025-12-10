#include <iostream>
#include <string>
using namespace std;
//WM = 103112400112_Muhammad Azzam Satria
struct Mahasiswa
{
    string nama;
    string NIM;
};

int main()
{
    Mahasiswa mhs;
    mhs.nama = "Azzam";
    mhs.NIM = "103112400112";

    cout << "Nama : " << mhs.nama << endl
         << "NIM : " << mhs.NIM;
}