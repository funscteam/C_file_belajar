#include <iostream>
using namespace std;

int main() {
    int umur;
    bool sudahLulus;
    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur >= 17) {
        cout << "Apakah sudah lulus (1 = Ya, 0 = Belum): ";
        cin >> sudahLulus;

        if (sudahLulus) {
            cout << "Anda dapat mendaftar sebagai mahasiswa baru" << endl;
        } else {
            cout << "Anda belum lulus, tidak dapat mendaftar" << endl;
        }
    } else {
        cout << "Anda belum cukup umur untuk mendaftar" << endl;
    }

    return 0;
}
