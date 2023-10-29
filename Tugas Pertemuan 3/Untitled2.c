#include <studio.h>
using namespace std;

int main() {
    int pilihan;
    double luas;

    cout << "Pilih bentuk geometri yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: // Persegi
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            break;

        case 2: // Persegi Panjang
            double panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            break;

        case 3: // Segitiga
            double alas, tinggi;
            cout << "Masukkan panjang alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            return 1;
    }

    cout << "Luas: " << luas << endl;
    return 0;
}
