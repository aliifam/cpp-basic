#include <iostream>

using namespace std;

//reporter
int kuadrat(int n) {
    int hasil;
    hasil = n * n;
    return hasil;
}

int tambah(int a, int b) {
    int hasil;
    hasil = a + b;
    return hasil;
}

int main() {
    int a, b, n;

    cout << "masukkan angka yag mau kuadrat = ";
    cin >> n;
    cout << "kudrat dari " << n << " = " << kuadrat(n) << endl; 

    cout << "masukkan angka pertama = ";
    cin >> a;
    cout << "masukkan angka kedua = ";
    cin >> b;
    cout << a << " + " << b << " = " << tambah(a, b) << endl; 
}