#include <iostream>
using namespace std;

int main(){
    int bilangan, jumlah = 0;
    //Input bilangan 
    cout <<"Masukkan bilangan: ";
    cin >> bilangan;
    //Hitung jumlah digit
    while (bilangan > 0) {
        jumlah++;
        bilangan /= 10;
    }
     //Output jumlah digit
     cout <<"Jumlah digit dari bilangan " <<
     bilangan <<"adalah"<<jumlah<<endl;

     return 0;
}