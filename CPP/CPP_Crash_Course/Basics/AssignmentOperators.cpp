#include <iostream>

using namespace std;

int main()
{
    int a, b; // 4 bytes

    a = 10;
    b = 4;
    a = b; // a becomes value at bb
    b = 7;

    cout << "a: ";
    cout << a << endl;
    cout << "b: ";
    cout << b << endl;

    a = 10;
    b = 4;
    b = a; // b becomes value at a
    b = 7;

    cout << "a: ";
    cout << a << endl;
    cout << "b: ";
    cout << b << endl;


    int x, y;
    y = 2 + (x = 5); //we reslve what's to the right of the operator first

    cout << "y: " << y << "   x: " << x << endl;

 

    int z;
    x = y = z = 5; // multiple assignments are possible


    cout << z  << y << x << endl;
   

    return 0;
}