#include <iostream>
using namespace std;

int main()
{
    /////////////////////
    //modular (%)
    ///////////////////

	//order matters in mod
    int mod1 = 2;
    int mod2 = 3;
    int mod3 = mod1 / mod2;
    cout << "mod3: " << mod3 << endl;
    mod3 = mod2 / mod1;
    cout << "mod3: " << mod3 << endl;


	//order matters in mod with negative numbers as well
	mod1 = 2;
    mod2 = -4;
    mod3 = mod1 / mod2;
    cout << "mod3: " << mod3 << endl;
    mod3 = mod2 / mod1;
    cout << "mod3: " << mod3 << endl;


    //working with unsigned int
	unsigned mod4 = -2;
    unsigned mod5 = 4;
    unsigned mod6 = mod4 / mod5;
    cout << "unsigned mod6: " << mod6 << endl;
    mod6 = mod5 / mod4;
    cout << "unsigned mod6: " << mod6 << endl;

    //working with signed int
	signed mod7 = 1;
    signed mod8 = 4;
    signed mod9 = mod7 / mod8;
    cout << "signed mod6: " << mod9 << endl;
    mod9 = mod8 / mod7;
    cout << "unsigned mod9: " << mod9 << endl;

    return 0;

}