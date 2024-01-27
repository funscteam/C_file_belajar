#include <iostream>
using namespace std;
int main () {
    
    int bilangan ;
    int faktorial = 1;// Inisialisasi nilai faktorial dengan 1

    
    cout << "Masikan bilangan  :";
    cin >> bilangan;
      // Menghitung faktorial dari bilangan menggunakan loop for
    for (int i = 1; i <= bilangan; ++i){
        faktorial *= i; // Mengalikan faktorial dengan nilai i
    }
     cout << "Faktorial dari " << bilangan << " adalah: " << faktorial << endl;
return 0;  // Menampilkan hasil faktorial
}