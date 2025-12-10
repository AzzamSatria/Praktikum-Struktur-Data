#include "soal3arraypointer.h"
using namespace std;

int main() {
    int A[3][3] = {{1,2,3},{4,10,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,11,4},{3,2,1}};
    int x = 1, y = 1;

    cout << "Array A sebelum ditukar:\n";
    tampilArray(A);
    cout << "\nArray B sebelum ditukar:\n";
    tampilArray(B);
    tukarPosisi(A, B, x, y);

    cout << "\nArray A sesudah ditukar:\n";
    tampilArray(A);
    cout << "\nArray B sesudah ditukar:\n";
    tampilArray(B);

    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    cout << "\nSebelum tukar pointer: a = " << a << ", b = " << b << endl;
    tukarPointer(p1, p2);
    cout << "Setelah tukar pointer: a = " << a << ", b = " << b << endl;
    return 0;
}
