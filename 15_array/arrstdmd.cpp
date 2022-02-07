#include <iostream>
#include <array>

using namespace std;

//arrval[baris][kolom]

const int kolom = 3;
const int baris = 2;

void printarrmd( array<array<int, kolom>, baris> arrvalmd) {
    for (array<int, kolom> vectorbaris : arrvalmd)
    {
        for (int valkolom : vectorbaris)
        {
            cout << valkolom << " ";
        }
        
        cout << endl;
    }
    
}

int main() {

    array<array<int, kolom>, baris>arrvalmd = {0, 1, 2, 3, 4, 5};

    cout << arrvalmd[0][0] << " ";
    cout << arrvalmd[0][1] << " ";
    cout << arrvalmd[0][2] << " ";

    cout << endl;

    cout << arrvalmd[1][0] << " ";
    cout << arrvalmd[1][1] << " ";
    cout << arrvalmd[1][2] << " ";


    cout << endl << endl;

    printarrmd(arrvalmd); 

}