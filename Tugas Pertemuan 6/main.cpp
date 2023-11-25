#include <iostream>
using namespace std;

int main() {

    int nilai[100];
    int i, jumlahnil, niltertinggi;

    cout << "Masukkan jumlah bilangan: ";
    cin >> jumlahnil;
    cout << endl;

    for (i = 0; i < jumlahnil; i++)
    {
        cout << "Indeks bilangan ke-" << i << "= ";
        cin >> nilai[i];
    }

    niltertinggi = nilai[0];

    for (i = 0; i < jumlahnil; i++)
    {
        if (niltertinggi < nilai[i])
        {
            niltertinggi = nilai[i];
        }
    }
    cout << "Nilai bilangan tertinggi adalah: " << niltertinggi;
    cout << endl;
    return 0;
}
