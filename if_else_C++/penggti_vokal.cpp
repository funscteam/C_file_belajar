#include <iostream>
using namespace std;
int main () {
        char huruf;
        cout << "Masukan sebuah huruf :" ;
        cin >> huruf;
        
        if (huruf == 'a','A' || huruf == 'e','E' || huruf == 'i','I' || huruf == 'o','O' || huruf == 'u','U')  {
            cout << "adalah huruf vokal " << endl;
        } else {
            cout << "adalah huruf konsonan" << endl;
        }
        cout << "Program selsai" << endl;
        
        return 0;
        
}
