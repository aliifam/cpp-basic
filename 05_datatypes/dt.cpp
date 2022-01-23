#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    int a = 5; //int 32 bit but 1bit for + or - and 31 bit for int

    cout << a << endl;
    cout << "ukuran signed interger dalam byte : " << sizeof(a) << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    short b = 5; //short 16 bit
    
    cout << b << endl;
    cout << "ukuran short dalam byte : "<< sizeof(b) << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    long c = 5; //long 64 bit

    cout << c << endl;
    cout << "ukuran long dalam byte : "<< sizeof(c) << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    char d = 'f'; //char 8 bit

    cout << d << endl;
    cout << "ukuran char dalam byte : "<< sizeof(d) << endl;
    cout << numeric_limits<long>::max() << endl;
    cout << numeric_limits<long>::min() << endl;

    bool e = true; //bool 1bit

    cout << e << endl;
    cout << "ukuran boolean dalam byte : "<< sizeof(e) << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<bool>::min() << endl;

    float g = 2.0;

    cout << g << endl;
    cout << "ukuran float dalam byte : "<< sizeof(g) << endl;
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << endl;

    double h = 3.0;

    cout << h << endl;
    cout << "ukuran double dalam byte : "<< sizeof(h) << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << endl;

    unsigned int i = 8; //32bit total without +-

    cout << i << endl;
    cout << "ukuran unsigned interger dalam byte : " << sizeof(i) << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
}

//memory management is using Byte, and one Byte = 8 bit

// interger => 32  bit, because int 1 = 4 byte, and 4 x 8 = 32 