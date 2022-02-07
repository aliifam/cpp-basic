#include <iostream>

using namespace std;

int main() {

    int value[6];
    
    value[0] = 1;
    value[1] = 2;
    value[2] = 3;
    value[3] = 4;
    value[4] = 5;

    cout << &value[0] << " nilainya adalah = " << value[0] << endl;
    cout << &value[1] << " nilainya adalah = " << value[1] << endl;
    cout << &value[2] << " nilainya adalah = " << value[2] << endl;
    cout << &value[3] << " nilainya adalah = " << value[3] << endl;
    cout << &value[4] << " nilainya adalah = " << value[4] << endl;

    cout << endl;

    int *pointer = value; //assign value index array dengan pointer
    *(pointer + 2) = 6;

    value[3] = 7; //assign value index based on index

    cout << &value[0] << " nilainya adalah = " << value[0] << endl;
    cout << &value[1] << " nilainya adalah = " << value[1] << endl;
    cout << &value[2] << " nilainya adalah = " << value[2] << endl;
    cout << &value[3] << " nilainya adalah = " << value[3] << endl;
    cout << &value[4] << " nilainya adalah = " << value[4] << endl;

    //mengetahui jumlah element dalam array

    cout << "ukuran array value = " << sizeof(value) << endl;
    cout << "jumlah elemen dalam array value = " << sizeof(value)/sizeof(int) << endl;

}