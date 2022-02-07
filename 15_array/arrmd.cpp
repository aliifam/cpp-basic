#include <iostream>

using namespace std;

void printmd(int *ptrarr, int baris, int kolom) {

    int index = 0;

    cout << *ptrarr + index << endl << endl;

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrarr + index) << " ";
            index ++;
        }

        cout << endl;
        
    }

    cout << endl;

    cout << *ptrarr << endl;
    cout << ptrarr << endl;
    
}

int main(){
    // array multidimensi
    // array[baris][kolom] = {isi}

    const int baris = 2;
    const int kolom = 2;
    int arrmd[baris][kolom] = {1, 2, 3, 4};

    printmd(*arrmd, baris, kolom);

}