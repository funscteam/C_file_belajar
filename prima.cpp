#include <iostream>
#include <cmath>// library untuk fungsi akr kuadarat
using namespace std;
int main () {
    
    int bilangan;
    
    //meminta input dari pengguna
    cout << "Masukan bilangan : ";
    cin >> bilangan ;
    
    if (bilangan > 1) { //bilangan prima harus lebih besar dari satu
        bool prima = true; //tanda untuk menandai itu bilangan prima atau bukan
        
        //iterasi untuk memeriksa pembagian dengan angka 2 hingga akar blangan
        for (int i = 2; i <= sqrt(bilangan); ++i){
            if (bilangan % i == 0) { // Jika ditemukan pembagi selain 1 dan bilangan itu sendiri
                prima = false;  // Set flag prima menjadi false
                break; // Keluar dari loop karena sudah cukup untuk menentukan bukan bilangan prima
            }
        }
        
        if  (prima) {
            cout << "Ini adalah bilangan prima" << endl ;
        }
        else {
            cout << "Ini bukan bilangan prima " << endl;
        }
    } else {
        cout << "Ini bukan bilangan prima " << endl;
    }
    return 0;
}