#include <iostream>

using namespace std;

double cal_vol(double p = 1, double l = 1, double t = 1); //wiith default arguments

int main() {
    cout << cal_vol(3, 4, 2) << endl;
    cout << cal_vol(3, 4) << endl;
    cout << cal_vol(3) << endl;
    cout << cal_vol() << endl;
}

double cal_vol(double p, double l, double t) {
    return p * l * t;
}