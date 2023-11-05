#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num){
    if(num < 2){
        return false;
    }
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int nilai;
    cout << "Masukkan nilai bilangan positif: ";
    cin >> nilai;

    cout << "Bilangan ganjil antara 1 dan " << nilai << " adalah: ";
    for(int i = 1; i <= nilai; i += 2){
        cout << i << " ";
    }
    cout << endl;

    cout << "Bilangan genap antara 1 dan " << nilai << " adalah: ";
    for(int i = 2; i <= nilai; i += 2){
        cout << i << " ";
    }
    cout << endl;

    cout << "Bilangan prima antara 1 dan " << nilai << " adalah: ";
    for(int i = 2; i <= nilai; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;

    int jumlahGanjil = 0;
    for(int i = 1; i <= nilai; i += 2){
        jumlahGanjil += i;
    }
    cout << "Jumlah semua bilangan ganjil dari 1 dan " << nilai << " adalah: " << jumlahGanjil << endl;

    int jumlahGenap = 0;
    for(int i = 2; i <= nilai; i += 2){
        jumlahGenap += i;
    }
    cout << "Jumlah semua bilangan genap dari 1 dan " << nilai << " adalah: " << jumlahGenap << endl;

    int jumlahPrima = 0;
    for(int i = 2; i <= nilai; i++){
        if(isPrime(i)){
            jumlahPrima += i;
        }
    }
    cout << "Jumlah semua bilangan prima dari 1 dan " << nilai << " adalah: " << jumlahPrima << endl;


    vector <int> faktorGanjil;
    for(int i = 1; i <= jumlahGanjil; i++){
        if(jumlahGanjil % i == 0){
            faktorGanjil.push_back(i);
        }
    }
    cout << "Faktor-faktor dari jumlah bilangan ganjil adalah: ";
    for(int factor : faktorGanjil){
        cout << factor << " ";
    }
    cout << endl;

    vector <int> faktorGenap;
    for(int i = 1; i <= jumlahGenap; i++){
        if(jumlahGenap % i == 0){
            faktorGenap.push_back(i);
        }
    }
    cout << "Faktor-faktor dari jumlah bilangan genap adalah: ";
    for(int factor : faktorGenap){
        cout << factor << " ";
    }
    cout << endl;

    vector <int> faktorPrima;
    for(int i = 1; i <= jumlahPrima; i++){
        if(jumlahPrima % i == 0){
            faktorPrima.push_back(i);
        }
    }
    cout << "Faktor-faktor dari jumlah bilangan prima adalah: ";
    for(int factor : faktorPrima){
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
