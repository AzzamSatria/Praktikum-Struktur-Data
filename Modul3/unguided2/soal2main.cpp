#include "soal2pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = createPelajaran(namapel, kodepel);
    tampilPelajaran(pel);
    return 0;
}
