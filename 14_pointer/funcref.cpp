#include <iostream>

using namespace std;

void fungsi(int &b){
    b = 10;
    cout << "nilai dari b = " << b << endl;
    cout << "alamat dari b = " << &b << endl;
}

void kuadrat(int &valref) {
    valref = valref * valref;
}

int main() {
    int a = 5;

    cout << "nilai dari a = " << a << endl;
    cout << "alamat dari a = " << &a << endl;

    cout << endl;

    fungsi(a);

     cout << "nilai dari a = " << a << endl;

    kuadrat(a);

    cout << "kuadrat dari a = " << a << endl;
}