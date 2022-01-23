#include <iostream>

using namespace std;

int main() {

    int a = 4;
    int b = 3;

    bool result;

    //not
    result = (a==b);
    cout << result << endl;

    result = !(a==b);
    cout << result << endl;

    //and 
    cout << "and\n";
    result = (a > b) and (b <= a);
    cout << result << endl;
    result = (a > b) && (b == a);
    cout << result << endl;
    result = (a < b) and (b <= a);
    cout << result << endl;
    result = (a < b) && (b == a);
    cout << result << endl;


    //or
    cout << "or\n";
    result = (a > b) or (b <= a);
    cout << result << endl;
    result = (a > b) || (b == a);
    cout << result << endl;
    result = (a < b) or (b <= a);
    cout << result << endl;
    result = (a < b) || (b == a);
    cout << result << endl;
}