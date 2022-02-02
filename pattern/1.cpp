#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "masukkan n = ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << endl;
    
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}