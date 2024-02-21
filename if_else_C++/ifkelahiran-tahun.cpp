#include <iostream>
#include <ctime>
using namespace std;
int main () {
    int usia;
    cout << "Masukan usia anda :";
    cin >> usia;
    
    //mendapatkan tahun sekarang
    time_t t = time(NULL);
    tm* sekarang = localtime(&t);
    int tahunsekarang = sekarang -> tm_year + 1900;
    
    int tahunkelahiran = tahunsekarang - usia;
    cout << "Tahun kelahiran anda adalah :" << tahunkelahiran << endl;
    return 0;
}
