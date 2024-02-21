#include <iostream>
using namespace std;
int main () {
    int sisi1, sisi2, sisi3;
    cout << "masukan Panjang sisi segitiga , pisah kan dengan spasi : ";
    cin >> sisi1 >> sisi2 >> sisi3;
    
    if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) {
        cout << "Segitiga sama kaki" << endl;
    } else {
        if (sisi1 * sisi1 + sisi2 * sisi2 == sisi3 * sisi3 ||
            sisi2 * sisi2 + sisi3 * sisi3 == sisi1 * sisi1 ||
            sisi1 * sisi1 + sisi3 * sisi3 == sisi2 * sisi2) {
                cout << "Segitiga siku siku" << endl;
            } else {
                cout << "Segitiga sembarang" << endl;
            }
    }
    return 0;
}
