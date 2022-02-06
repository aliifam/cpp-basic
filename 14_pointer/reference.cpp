#include <iostream>

using namespace std;

int main() {

    int a = 5;
    int c = 5;

    cout << "nilai dari a = " << a << endl;
    cout << "address dari a = " << &a << endl << endl;

    //reference
    int &b = a;

    cout << "nilai dari b = " << b << endl;
    cout << "address dari b = " << &b << endl << endl;

    b = 10;

    cout << "nilai dari a = " << a << endl;
    cout << "nilai dari b = " << b << endl << endl;

    a = 20;
    cout << "nilai dari a = " << a << endl;
    cout << "nilai dari b = " << b << endl << endl;

    cout << "nilai dari c = " << c << endl;
    cout << "address dari c = " << &c << endl << endl;
}
