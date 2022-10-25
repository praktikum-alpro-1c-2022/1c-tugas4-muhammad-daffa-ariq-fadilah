#include <iostream>
using namespace std;

int main(){
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;
    if(tahun%400==0){
        cout << tahun << " Bukan tahun kabisat";
    }else if(tahun%4==0){
        cout << tahun << " Merupakan tahun kabisat";
    }else{
        cout << tahun << " Bukan tahun kabisat";
    }
    return 0;
}
