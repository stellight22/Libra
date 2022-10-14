#include <iostream>

using namespace std;

int main()
{
    //treat character char vs. integer to answer signed vs. unsigned char

    signed char sc[30];
    int forsc;
    cout << "signed char to int:" << endl;
    for (int i = 0; i< 30; i++)
    {
        forsc = (int)sc[i];
        cout << endl;
        cout << forsc;
    }
    cout << endl;

    cout << "char addition for char overflow example" << endl;
    char mu = 99;
    char g = 230;
    char mug = mu +g;
    cout << mug <<endl;
    cout << (int)mug << endl;
    cout << "CHAR_MAX = " << CHAR_MAX << endl;
        //ascii value of I = 73, 230 + 99 = 329, 329 - CHAR MAX = 74, which is 73 +1

    cout << endl;
    cout << "unsigned char to int" << endl;
    unsigned char uc[30];
    int duc;
    for (int l = 0; l<30; l++)
    {
        duc = (int)uc[l];
        cout << endl;
        cout << duc;
    }

    cout << endl;
    cout << "unsigned char [test index] =" << (int)uc[23] << endl;

    cout << endl;
    cout << "Assign a negative number to unsigned char example" << endl;

    unsigned char lm = -900;
    cout << lm << endl; // lm = 124 ascii
    


    return 0;
}