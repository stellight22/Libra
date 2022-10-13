#include <iostream>
using namespace std;

int main()
{
    /////////////////////
    // Subtraction (-)
    ///////////////////

	//order matters in subtraction
    int sub1 = 2;
    int sub2 = 4;
    int sub3 = sub1 - sub2;
    cout << "sub3: " << sub3 << endl;
    sub3 = sub2 - sub1;
    cout << "sub3: " << sub3 << endl;


	//order matters in subtraction with negative numbers as well
	sub1 = 2;
    sub2 = -4;
    sub3 = sub1 - sub2;
    cout << "sub3: " << sub3 << endl;
    sub3 = sub2 - sub1;
    cout << "sub3: " << sub3 << endl;


    //working with unsigned int
	unsigned sub4 = -2;
    unsigned sub5 = 4;
    unsigned sub6 = sub4 - sub5;
    cout << "unsigned sub6: " << sub6 << endl;
    sub6 = sub5 - sub4;
    cout << "unsigned sub6: " << sub6 << endl;

    //working with signed int
	signed sub7 = -2;
    signed sub8 = 4;
    signed sub9 = sub7 - sub8;
    cout << "signed sub6: " << sub9 << endl;
    sub9 = sub8 - 7;
    cout << "unsigned sub9: " << sub9 << endl;

    return 0;

}