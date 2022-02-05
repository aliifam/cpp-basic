#include <iostream>

using namespace std;

int factorial(int angka) {
    if (angka <= 2)
    {
        return angka;
    } else {
        return angka * factorial(angka - 1);
    }
    
}

int main() {

    int angka;

    cout << "masukkan angka = ";
    cin >> angka;

    cout << "fakorial dari " << angka << " = " << factorial(angka);
}