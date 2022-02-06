#include <iostream>

using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main() {

    int a = 5;
    cout << "nilai dari a = " << a << endl;
    cout << "address dari a = " << &a << endl;

    fungsi(&a);

    cout << endl;

    kuadrat(&a);
}

void fungsi(int *b){
    cout << "address dari b = " << b << endl; 
    cout << "nilai dari b = " << *b << endl;  //dereferencing
}

void kuadrat(int *valptr) {
    *valptr = (*valptr) * (*valptr);
    cout << "nilai dari a = " << *valptr << endl; 
}