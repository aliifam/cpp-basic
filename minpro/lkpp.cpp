#include <iostream>

using namespace std;

double lpp(double h, double w) {
    double result;

    result = h * w;

    return result;
}

double kpp(double h, double w) {
    double result;

    result = (2 * h) + (2 * w);

    return result;
}

void tampil_lpp(double h, double w) {
    cout << "luas persegi panjang = ";
    cout << lpp(h, w) << endl;
}

void tampil_kpp(double h, double w) {
    cout << "keliling persegi panjang = ";
    cout << kpp(h, w) << endl;
}

int main() {
    double h, w;

    cout << "masukkan panjang = ";
    cin >> w;

    cout << "masukkan lebar = ";
    cin >> h;

    cout << "rectangle property" << endl;
    cout << "==================" << endl;

    tampil_lpp(h, w);
    tampil_kpp(h,w);
}