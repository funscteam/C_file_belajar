#include <iostream>
using namespace std;
int main () {
    double jamkerja, gajiperjam;
    cout << "Masukan jumlah jam kerja:";
    cin >> jamkerja;
    
    if (jamkerja <= 0) {
        cout << "Jama kerja tidak valid" << endl;
    } else {
        cout << "Masukan gaji per jam $";
        cin >> gajiperjam;
        
        if (gajiperjam <= 0) {
            cout << "Gaji perjam tidak valid" << endl;
        } else {
            double gajitotal = jamkerja * gajiperjam;
            cout << "Gaji total : $" << gajitotal << endl;
        }
    }
    return 0;
}
