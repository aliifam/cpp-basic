#include <iostream>

using namespace std;

int main() {

    int a = 5;

    //pointer => selalu bertipe data int dan * untuk tanda
    //nullpointer dengan nullptr

    int *aptr = nullptr;
    aptr = &a;

    // int a punya nilai dan alamat (address)

    cout << "niai dari a = " << a << endl;

    cout << "alamat memory dari a = " << aptr << endl;

    //dereferencing = mengambil nilai dari alamat sebuah pointer => *aptr

    a = 10;

    cout << "mengambil nilai dari a based on address = " << *aptr << endl;

}