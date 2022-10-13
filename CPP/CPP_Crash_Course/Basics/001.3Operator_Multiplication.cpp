#include <iostream>
using namespace std;

int main()
{
    /////////////////////
    // Multiplication (*)
    ///////////////////

	//order dont matter 
    int mul1 = 2;
    int mul2 = 4;
    int mul3 = mul1 * mul2;
    cout << "mul3: " << mul3 << endl;
    mul3 = mul2 * mul1;
    cout << "mul3: " << mul3 << endl;


	//order dont matter in multiplication
	mul1 = 2;
    mul2 = -4;
    mul3 = mul1 * mul2;
    cout << "mul3: " << mul3 << endl;
    mul3 = mul2 * mul1;
    cout << "mul3: " << mul3 << endl;


    //working with unsigned int
	unsigned mul4 = -2;
    unsigned mul5 = 4;
    unsigned mul6 = mul4 * mul5;
    cout << "unsigned mul6: " << mul6 << endl;
    mul6 = mul5 * mul4;
    cout << "unsigned mul6: " << mul6 << endl;

    //working with signed int
	signed mul7 = -2;
    signed mul8 = 4;
    signed mul9 = mul7 * mul8;
    cout << "signed mul6: " << mul9 << endl;
    mul9 = mul8 * mul7;
    cout << "unsigned mul9: " << mul9 << endl;

    return 0;

}