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

    cout << "signed char to unsigned int:"<< endl;
    unsigned int fsc2;
    for (int h = 0; h< 30; h++)
    {
        fsc2 = (int)sc[h];
        cout << endl;
        cout << fsc2;
    }

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
    cout << "unsigned char to unsigned int" <<endl;
    for (int w = 0; w< 30; w++)
    {
        fsc2 = (int)uc[w];
        cout << endl;
        cout << fsc2;
    }

    cout << "unsigned char [test index] =" << (int)uc[23] << endl;

    cout << "char addition for char overflow example" << endl;
    char mu = 99;
    char g = 230;
    char mug = mu +g;
    cout << mug <<endl;
    cout << (int)mug << endl;

    //ascii value of I = 49, 230 + 99 = 329, 


    cout << endl;
    cout << "the maximum value of signed char is: ";
    cout << CHAR_MAX << endl;

    


    return 0;
}