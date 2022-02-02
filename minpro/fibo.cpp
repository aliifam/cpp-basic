#include <iostream>

using namespace std;

int main() {

    int n, fn, fn1, fn2;

    cout << "deret fibonacci ke = ";
    cin >> n;

    fn1 = 1;
    fn2 = 0;
    fn = fn1 + fn2;

    for (int i = 1; i <= n; i++)
    {
        if (i < 2)
        {
            cout << fn1 << endl;
        } else {
            fn = fn1 + fn2;
            fn2 = fn1;
            fn1 = fn;

            cout << fn << endl;
        }
    } 
}