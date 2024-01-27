#include <iostream>
using namespace std;
int main () {
    
    
    int pilihanmenu;
    cout << "Menu restoran :" << endl;
    cout << "1. Nasi goreng" << endl;
    cout << "2. Mie goreng" << endl;
    cout << "3. Soto ayam" << endl;
    cout << "Pilih menu (1-3):";
    cin >> pilihanmenu;
    
    if (pilihanmenu == 1) {
        cout << "Anda memesan nasi goreng" << endl;
    } else if (pilihanmenu == 2) {
        cout << "Anda memilih mie goreng" << endl;
    } else if (pilihanmenu == 3){
        cout << "Anda memilih soto ayam" << endl;
    } else {
        cout << "Menu tidak valid !!" << endl;
    }
    return 0;
}