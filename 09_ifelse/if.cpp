#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "masukkan angka interger = ";
    cin >> a;

    if (a < 10) {
        cout << "tebakan anda benar" <<endl;
    } else {
        cout << "tebakan anda salah"<<endl;
    }

    cout << "selesai";
}