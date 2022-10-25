#include <iostream>
using namespace std;

int main(){
    int kode;
    string ukuran;
    float jumlah;
    cout << " Kode susu |Nama Produk | Ukuran  |Harga" << endl;
    cout << " __________|____________|_________|___________" << endl;
    cout << " 1         |Dancow      |B=Besar  |Rp.10.000,-" << endl;
    cout << "           |            |S=Sedang |Rp. 4.250,-" << endl;
    cout << "           |            |K=Kecil  |Rp. 2.100,-" << endl;
    cout << " __________|____________|_________|___________" << endl;
    cout << " 2         |Indomilk    |B=besar  |Rp. 8.500,-" << endl;
    cout << "           |            |S=Sedang |Rp. 4.000,-" << endl;
    cout << "           |            |K=Kecil  |Rp. 2.025,-" << endl;
    cout << " __________|____________|_________|___________" << endl;
    cout << " 3         |Sustacal    |B=besar  |Rp.17.000,-" << endl;
    cout << "           |            |S=Sedang |Rp.14.500,-" << endl;
    cout << "           |            |K=Kecil  |Rp. 8.300,-" << endl;
    cout << "\nMasukkan kode susu(1-3): ";
    cin >> kode;
    cout << "Masukkan jumlah pembelian: ";
    cin >> jumlah;
    cout << "Masukkan ukuran (B/S/K): ";
    cin >> ukuran;
    if (kode==1){
        if(ukuran=="B"){
            cout << "\nsusu Dancow" << endl << "Harga susu Rp.10.000,-" << endl << "Jumlah pembelian Rp. " << jumlah*10000;
        }else if(ukuran=="S"){
            cout << "\nSusu Dancow" << endl << "Harga susu Rp.4.250,-" << endl << "Jumlah Pembelian Rp. " << jumlah*4250;
        }else if(ukuran=="K"){
            cout << "\nSusu Dancow" << endl << "Harga susu Rp.2.100,-" << endl << "Jumlah pembelian Rp. " << jumlah*2100;
        }else{
            cout << "Tolong pilih ukuran yang tersedia";
        }
    }else if(kode==2){
        if(ukuran=="B"){
            cout << "\nSusu Indomilk" << endl << "Harga susu Rp.8.500,-" << endl << "Jumlah pembelian Rp. " << jumlah*8500;
        }else if(ukuran=="S"){
            cout << "\nSusu Indomilk" << endl << "Harga susu Rp.4.000,-" << endl << "Jumlah pembelian Rp. " << jumlah*4000;
        }else if(ukuran=="K"){
            cout << "\nSusu Indomilk" << endl << "Harga susu Rp.2.025,-" << endl << "Jumlan pembelian Rp. " << jumlah*2025;
        }else{
            cout << "Tolong pilih ukuran yang tersedia";
        }
    }else if(kode==3){
        if(ukuran=="B"){
            cout << "\nSusu Sustacal" << endl << "Harga susu Rp.17.000,-" << endl << "Jumlah pembelian Rp. " << jumlah*17000;
        }else if(ukuran=="S"){
            cout << "\nSusu Sustacal" << endl << "Harga susu Rp.14.500,-" << endl << "Jumlah pembelian Rp. " << jumlah*14500;
        }else if(ukuran=="K"){
            cout << "\nSusu Sustacal" << endl << "Harga susu Rp.8.300,-" << endl << "Jumlan pembelian Rp. " << jumlah*8300;
        }else{
            cout << "Tolong pilih ukuran yang tersedia";
        }
    }else{
        cout << "Tolong pilih kode yang tersedia";
    }
    return 0;
}
