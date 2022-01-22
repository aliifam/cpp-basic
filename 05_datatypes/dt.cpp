#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    int a = 5; //int 32 bit

    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    short b = 5; //short 16 bit
    
    cout << b << endl;
    cout << sizeof(b) << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

}

//memory management is using Byte, and one Byte = 8 bit

// interger => 32  bit, because int 1 = 4 byte, and 4 x 8 = 32 