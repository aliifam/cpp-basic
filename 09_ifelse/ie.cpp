#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "masukkan angka = ";
    cin >> a;

    if (a == 5) {
        cout << "ya ini angka = " << a;
    } else if (a == 3) {
        cout << "ya ini angka = " << a;
    } else {
        cout << "angka ini = " << a << "tidak ada dalam cabang";
    }
}