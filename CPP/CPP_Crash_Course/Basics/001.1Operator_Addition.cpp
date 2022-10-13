#include <iostream>
using namespace std;

int main()
{
    /////////////////////
    //1. Addition (+)
    ///////////////////

	//In addition with only positive numbers, order does not matter, you still get the same end result
    int add1 = 2;
    int add2 = 4;
    int add3 = add1 + add2;
    cout << "add3: " << add3 << endl;
    add3 = add2 + add1;
    cout << "add3: " << add3 << endl;


	//in addition with positive and negative numbers, order does matter
	add1 = 2;
    add2 = -4;
    add3 = add1 + add2;
    cout << "add3: " << add3 << endl;
    add3 = add2 + add1;
    cout << "add3: " << add3 << endl;


    //working with unsigned int
	unsigned short int add4 = -1;
    cout << "add4: " << add4<< endl;
    unsigned add5 = 4;
    cout << "add5: " << add5<< endl;
    unsigned add6 = add4 + add5;
    cout << "unsigned add6: " << add6 << endl;
    add6 = add4 + add5;
    cout << "unsigned add6: " << add6 << endl;

    //working with signed int
	signed add7 = -65535;
    signed add8 = 4;
    signed add9 = add7 + add8;
    cout << "signed add6: " << add9 << endl;
    add9 = add7 + add8;
    cout << "unsigned add9: " << add9 << endl;

    return 0;

}