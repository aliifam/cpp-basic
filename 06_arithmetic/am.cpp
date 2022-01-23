#include <iostream>

using namespace std;

int main () {

    int a = 6;
    int b = 4;

    int hasil;

    //all operator => +-*/%

    // +
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // -
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // *
    hasil = a * b;
    cout << a << " X " << b << " = " << hasil << endl;

    // /
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // %
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // ()

    hasil = (a+b)*a;
    cout << hasil << endl;


    cin.get();
    return 0;
}