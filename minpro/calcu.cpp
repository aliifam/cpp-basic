//simple calculator

#include <iostream>

using namespace std;

int main() {

    float a, b, result;

    char operasi;

    cout << "======welcome to mini calculator======" << endl;

    cout << "masukkan nilai pertama = ";
    cin >> a;
    cout << "masukkan nilai kedua = ";
    cin >> b;
    cout << "masukkan opartor (+-/*) = ";
    cin >> operasi;

    cout << "menghitung operasi = " << a << operasi << b << endl;

    /* using else if for branching
    if (operasi == '+') {
        result = a + b;
        cout << "hasil dari operasi = " << a << operasi << b << " = " << result; 
    } else if (operasi == '-') {
        result = a - b;
        cout << "hasil dari operasi = " << a << operasi << b << " = " << result;
    } else if (operasi == '*') {
        result = a * b;
        cout << "hasil dari operasi = " << a << operasi << b << " = " << result;
    } else if (operasi == '/') {
        result = a / b;
        cout << "hasil dari operasi = " << a << operasi << b << " = " << result;
    }
    */

   switch (operasi)
   {
   case '+':
       result = a + b;
       cout << "hasil dari operasi = " << a << operasi << b << " = " << result; 
       break;
    case '-':
       result = a - b;
       cout << "hasil dari operasi = " << a << operasi << b << " = " << result; 
       break;
    case '*':
       result = a * b;
       cout << "hasil dari operasi = " << a << operasi << b << " = " << result; 
       break;
    case '/':
       result = a / b;
       cout << "hasil dari operasi = " << a << operasi << b << " = " << result; 
       break;
    default:
       cout << "ups any probs";
       break;
   }

   cout << "\nprogram finished!";
}