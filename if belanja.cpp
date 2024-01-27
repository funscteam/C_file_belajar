#include <iostream>
using namespace std;

int main() {
    double totalBelanja, diskon = 0.0;
    cout << "Masukkan total belanja: $";
    cin >> totalBelanja;

    if (totalBelanja >= 100) {
        diskon = 0.1; // Diskon 10% untuk pembelian di atas $100
    } else if (totalBelanja >= 50) {
        diskon = 0.05; // Diskon 5% untuk pembelian di atas $50
    }
    double totalsetelahdiskon = totalBelanja - (totalBelanja * diskon) ;
    cout << "Total setelah diskon : $" << totalsetelahdiskon << endl;
}