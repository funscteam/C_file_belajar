#include <iostream>
using namespace std;
int main () {
    int umur ;
    cout << "Masukan umur anda :" ;
    cin >> umur;
    
    if (umur < 0) {
        cout << "Umur tidak valid !!" << endl;
    } else if (umur < 18) {
        cout << "Anda masih anak anak" << endl;
    } else if (umur < 60) {
        cout << "Anda sudah dewasa" << endl;
    } else {
        cout << "Lansia"  << endl;
    }
    cout << "Program sudah selsesai";
    
    
    return 0;
}
