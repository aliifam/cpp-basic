#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            //break;
            continue;
        }

        cout << i << endl;
        
    }


    cout << "\n\n";

    int j = 0;

    while (j <= 10)
    {
        j++;
        cout << j << endl;

        if (j == 5)
        {
            break;
        }
        
    }
    
}