#include <iostream>

using namespace std;

//protoype => function declaration.

double lpp(double h, double w);

void tampil(double x);

int main() {
    double w, h, hasil;

    cout << "masukkan panjang = ";
    cin >> h;
    cout << "masukkan lebar = ";
    cin >> w;

    hasil = w * h;

    tampil(hasil);
}

double lpp(double h, double w) {
    return h * w;
}

void tampil(double x) {
    cout << "luasnya adalah = " << x << endl;
}