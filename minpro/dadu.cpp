#include <iostream>
#include <cstdlib> //containing random function

using namespace std;

int main() {

    char lagi;
    
    while (true)
    {
        cout << "mau lempar dadu (y/n) ? ";
        cin >> lagi;

        if (lagi == 'y')
        {
            cout << 1 + (rand() % 6) << endl;

        } else if (lagi == 'n')
        {

            break;

        } else {
            cout << "y atau n saja ya kakak masukinnya !!!" << endl;
        }
        
    }
    
}