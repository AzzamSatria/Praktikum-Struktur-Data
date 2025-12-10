#include <iostream>
using namespace std;
// WM : 103112400112_Muhammad Azzam Satria
int main() {
    int hari;
    cout << "Hari 1-7: ";
    cin >> hari;
    if (hari == 7)
    {
        cout << "Hari Minggu\n";
    }
    else{
        cout << "Hari Kerja\n";
    }

    switch (hari)
    {
        case 7:
        cout << "Hari Minggu\n";
        break;

    default:
        cout << "Hari Kerja\n";
        break;
    }
    return 0;
}