#include <iostream>
using namespace std;

int main() {
    double ipk;
    bool memilikiPenghasilan;
    cout << "Masukkan IPK mahasiswa: ";
    cin >> ipk;

    if (ipk >= 3.5) {
        cout << "Mahasiswa berhak mendapatkan beasiswa" << endl;

        cout << "Apakah mahasiswa memiliki penghasilan (1 = Ya, 0 = Tidak): ";
        cin >> memilikiPenghasilan;

        if (memilikiPenghasilan) {
            cout << "Tetapi, mahasiswa memiliki penghasilan. Tidak dapat mendapatkan beasiswa penuh." << endl;
        } else {
            cout << "Mahasiswa dapat mendapatkan beasiswa penuh." << endl;
        }
    } else {
        cout << "Mahasiswa tidak berhak mendapatkan beasiswa" << endl;
    }

    return 0;
}
