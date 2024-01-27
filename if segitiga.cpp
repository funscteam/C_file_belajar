#include <iostream>
using namespace std;
int main () {
    int sisi1, sisi2, sisi3;
    cout << "Masukan panjang sisi segitiga, pisahkan dengan spasi :";
    cin >> sisi1 >> sisi2 >> sisi3;
    
    if (sisi1 == sisi2 && sisi2 == sisi3) {
        cout << "Segitiga sama sisi" << endl;
    } else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) {
        cout << "Segitiga sama kaki";
    }
    else {
        cout << "segitiga sembarang";
    }
    
    
    return 0;
    
}