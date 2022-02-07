#include <iostream>
#include <array>

using namespace std;

int main() {
    //looping array c++ 11version ++
    /*
        for(var declaration : array) {
            statement
        }
    */

   int arrval[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   for (int val : arrval)
   {
       cout << val << endl;
   }

   cout << endl;

   // manipulasi dengan reference

   for (int &valref : arrval)
   {
       valref *= 2;

       cout << valref << endl;
   }

   cout << endl;

   for (int &valref : arrval)
   {
       cout << "address = " << &valref << " nilainya = " << valref << endl;
   }
   
}