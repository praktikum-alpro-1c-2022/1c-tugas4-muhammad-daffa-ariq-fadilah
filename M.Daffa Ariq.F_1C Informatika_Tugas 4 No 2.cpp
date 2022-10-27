#include <iostream>
using namespace std;

int main(){
    string username, password;
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    if(username=="Admin"||password=="Admin123"){
        if(username!="Admin"){
            cout << "username salah";
        }else if(password!="Admin123"){
            cout << "password salah";
        }else{
            cout << "login berhasil";
        }
    }else{
        cout << "username dan password salah";
    }
    return 0;
}
