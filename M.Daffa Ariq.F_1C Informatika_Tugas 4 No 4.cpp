#include <iostream>
using namespace std;

int main(){
    char menu;
    cout << "   Menu Restaurant Mc'Yahud" << endl;
    cout << "===========================================" << endl;
    cout << "1.Nasi Goreng Informatika    Rp.5.000,-" << endl;
    cout << "2.Nasi Solo Ayam Internet    Rp.7.000,-" << endl;
    cout << "3.Gado-gado Disket           Rp.4.500,-" << endl;
    cout << "4.Bubur Ayam LAN             Rp.4.000,-" << endl;
    cout << "===========================================\n" << endl;
    cout << "Masukkan pilihan anda: ";
    cin >> menu;
    switch(menu){
    case '1':
        cout << "\nPilihan No.1 Nasi Goreng Informatika Rp.5.000,-\n";
        break;
    case '2':
        cout << "\nPilihan No.2 Nasi Solo Ayam Internet Rp.7.000,-\n";
        break;
    case '3':
        cout << "\nPilihan No.3 Gado-gado Disket Rp.4.500,-\n";
        break;
    case '4':
        cout << "\nPilihan No.4 Bubur Ayam LAN Rp.4.000,-\n";
        break;
    default:
        cout << "\nMenu tidak ada\n";
        break;
    }
    return 0;
}
