#include <iostream>

using namespace std;

int main() {
    
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "==============" << endl;

    int tot = 0;

    for (int j = 0; j <= 10; j++, tot+=j)
    {
        cout << j << " || ";
        cout << tot << endl;
    }
    
    
}