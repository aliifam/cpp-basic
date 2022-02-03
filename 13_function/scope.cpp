#include <iostream>

using namespace std;

int x = 10; //global variable

int take_global() {
    return x; // take global var
}

int var_local() {
    int x = 5; 
    return x; //local variabel => var_local as scope
}


int main() {

    cout << "1. variabel global = " << x << endl;

    int x = 8; 

    cout << "2. variabel local scope main() = " << x << endl;

    cout << "3. variabel global take_global() = " << take_global() << endl;

    cout << "4. variabel local scope main() = " << x << endl;

    cout << "5. variabel local scope varl_local() = " << var_local() << endl;

    cout << "6. variabel local scope main() = " << x << endl;

    cout << "7. variabel local scope main() = " << x << endl;

    {
        cout << "8. variabel local scope main() = " << x << endl;

        int x = 3; //block scope var

        cout << "9. variabel local block = " << x << endl;

        cout << "10. variabel take_global() = " << ::x << endl;
    }

    cout << "11. variabel local scope main() = " << x << endl;

}