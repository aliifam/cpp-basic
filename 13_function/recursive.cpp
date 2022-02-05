#include <iostream>

using namespace std;

//recursion => pengulangan aka fungsi yg memanggi dirinya sendiri secara finite (terbatas)

int pangkat(int angka, int pangkat) {
    int result = angka;

    for (int i = 1; i < pangkat; i++)
    {
        result = result * angka;
    }

    return result;
    
}

int pangrek(int angka, int pangkat) {
    if (pangkat < 2)
    {
        return angka;
    } else {
        return angka * pangrek(angka, pangkat - 1);
    }
    
}

int main() {

    int a, b;

    cout << "masukkan angka = ";
    cin >> a;
    cout << "masukkan pangkat = ";
    cin >> b;

    cout << "hasil dengan looping for = " << pangkat(a, b) << endl;
    cout << "hasil dengan recursive = " << pangrek(a, b) << endl;

}