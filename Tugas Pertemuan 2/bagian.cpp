#include <iostream>

using namespace std;

int main()
{
    int bil,bagi,hasil,sisa;

    cout<<"Masukkan bilangan jumlah bebek: ";
    cin>>bil;

    cout<<"Jumlah teman yang dibagi: ";
    cin>>bagi;

    hasil=bil/bagi;
    sisa=bil%bagi;

    cout<<"Hasil bagian = "<<hasil<<endl;
    cout<<"Tersisa = "<<sisa<<endl;

    return 0;
}
