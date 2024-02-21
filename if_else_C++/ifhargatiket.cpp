#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur Anda: ";
    cin >> umur;

    if (umur < 12) {
        cout << "Harga tiket anak-anak: $5" << endl;
    } else if (umur < 18) {
        cout << "Harga tiket remaja: $8" << endl;
    } else if (umur < 60) {
        cout << "Harga tiket dewasa: $10" << endl;
    } else {
        cout << "Harga tiket lansia: $7" << endl;
    }

    return 0;
}
