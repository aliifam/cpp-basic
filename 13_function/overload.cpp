#include <iostream>

using namespace std;

//overloading => menimpa

//basic function
int luas_kotak(int width, int height) {
    int result;
    result = width * height;
    return result;
}

//overloading
int luas_kotak(int sisi) {
    int result;
    result = sisi * sisi;
    return result;
}

double luas_kotak(double sisi) {
    return sisi * sisi;
}

int main() {
    cout << "luas kotak 4 x 8 = " << luas_kotak(4, 8) << endl;

    cout << "luas kotak 2 x 2 = " << luas_kotak(2) << endl;

    cout << "luas kotak 4.5 x 4.5 = " << luas_kotak(4.5);

}