#include <iostream>
#include <array>

using namespace std;

int main() {

    //make array with standart library
    //array<int, jumlah array> namaarray;

    array<int, 5> value;

    for (int i = 0; i <= 4; i++)
    {
        value[i] = i;
        cout << "nilai " << "[" << i << "] = " << value[i] << " address = " << &value[i] << endl;
    }

    cout << endl;

    cout << "ukuran array value = " << value.size() << endl;

    cout << "alamat value index awal array value = " << value.begin() << endl;

    cout << "alamat value batas akhir array value = " << value.end() << endl;

    cout << "bilai elemen index ke 2 array value = " << value.at(2) << endl;
}