#include <iostream>
using namespace std;

int main(){
    string username, password;
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    if(username == "Admin" && password == "Admin123"){
        cout << "Login berhasil";
    }else if(username == "Admin"){
        cout << "Password salah";
    }else if(password == "Admin123"){
        cout << "Username salah";
    }else{
        cout << "Username dan password salah";
    }
    return 0;
}
