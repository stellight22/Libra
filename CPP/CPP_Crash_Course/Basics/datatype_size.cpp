#include <iostream>

using namespace std;

int main()
{
    cout << "Sizes are in bytes ( 1 byte = 8 bits) " << endl;
    cout << "Size of char : " << sizeof(char) <<endl;
    cout << "Size of char16_t : " << sizeof(char16_t) << endl;
    cout << "Size of char32_t : " << sizeof(char32_t) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of signed char : " << sizeof(signed char) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of boolean : " << sizeof(bool) << endl;
    cout << "Size of void : " << sizeof(void) << endl;

    return 0;
}