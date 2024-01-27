#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Menukar elemen jika mereka tidak dalam urutan yang benar
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Meminta input dari pengguna untuk ukuran array
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];

    // Meminta input elemen-elemen array dari pengguna
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Memanggil fungsi Bubble Sort
    bubbleSort(arr, n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan menggunakan Bubble Sort:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
