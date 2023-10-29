#include <iostream>
using namespace std;

int main (){
    int score;
    cout<<"Masukkan nilai score : ";
    cin>>score;
    if(score >= 90){
        cout<<"Selamat! Anda mendapatkan nilai A."<<endl;
    }else if(score >= 80 and score <= 89){
        cout<<"Anda mendapatkan nilai B."<<endl;
    }else if(score >= 70 and score <= 79){
        cout<<"Anda mendapatkan nilai C."<<endl;
    }else if(score >=60 and score <= 69){
        cout<<"Anda mendapatkan nilai D."<<endl;
    }else{
        cout<<"Anda mendapatkan nilai E."<<endl;
    }

    return 0;

}
