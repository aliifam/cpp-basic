#include <iostream>

using namespace std;

int main() {

    int a;

    cout << "masukkan angka dibawah 10 = ";
    cin >> a;


    if (a < 10) {
        cout << "bagus anda sesuai instruksi\n";
    } else {
        cout << "udah dibilangin masih gak nurut\n";
    }

    cout << "program selesai";
}