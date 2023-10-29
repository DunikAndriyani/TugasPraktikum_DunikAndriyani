#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, angka3;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    double terbesar;

    if (angka1 >= angka2 && angka1 >= angka3) {
        terbesar = angka1;
    } else if (angka2 >= angka1 && angka2 >= angka3) {
        terbesar = angka2;
    } else {
        terbesar = angka3;
    }

    cout << "Angka terbesar adalah: " << terbesar << endl;

    return 0;
}
