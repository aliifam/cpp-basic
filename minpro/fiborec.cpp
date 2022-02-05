#include <iostream>

using namespace std;

int fiborec(int angka) {
    if (angka <= 2)
    {
        return 1;

    } else {

        return fiborec(angka - 2) + fiborec(angka -1);

    }
    
}

int main() {

    int angka;
    cout << "masukkan angka = ";
    cin >> angka;

    cout << "faktorial dari angka " << angka << " = " << fiborec(angka);

}