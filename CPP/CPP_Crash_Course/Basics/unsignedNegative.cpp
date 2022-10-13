#include <iostream>

using namespace std;

int main()
{

    //Integers
    unsigned int a = -1;
    unsigned int b = -300;

    //Doubles
    unsigned int c = -4;
    cout <<c << endl; //4294967292
    cout <<b << endl; //4294966996 = UINTMAX - 299
    cout <<a << endl; //4294967295

    cout << UINT_MAX <<endl; //4294967295

    return 0;

}
