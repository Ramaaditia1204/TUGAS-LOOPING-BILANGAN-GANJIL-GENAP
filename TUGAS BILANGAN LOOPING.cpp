#include <iostream>
using namespace std;

int main() {
    int jumlahData = 0;
    int jumlahGenap = 0;
    int jumlahGanjil = 0;

    cout << "Masukkan jumlah data: ";
    cin >> jumlahData;

    for (int i = 0; i < jumlahData; i++) {
        if (i % 2 == 0) {
            jumlahGenap += i;
        }
        else {
            jumlahGanjil += i;
        }
    }

    cout << "Jumlah total bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah total bilangan genap: " << jumlahGenap << endl;

    return 0;
}