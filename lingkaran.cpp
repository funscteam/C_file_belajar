#include <iostream>
using namespace std;

int main() {
    //deklarasi tinggi lebar, hasil dan pi = 3.14
    double tinggi, lebar;
    double hasil, pi = 3.14; //nilai pi digunakan untuk menghitung bilangan ;

    //meminta input dari pengguna;
    cout << "Masukkan tinggi lingkaran: ";
    cin >> tinggi;
    cout << "Masukkan lebar lingkaran: ";
    cin >> lebar;

    //menghitung rumus lingkaran menggunakan pi dan lain lain
    hasil = tinggi * lebar / pi;

    cout << "Hasil luas sebuah lingkaran adalah: " << hasil << endl;

    return 0;
}
