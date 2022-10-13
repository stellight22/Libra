#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// function to convert decimal to binary
unsigned int * UintToBinary(unsigned int n)
{
    // array to store binary number
    static unsigned int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }

    return binaryNum;
}



int main()
{
    unsigned int o;

    unsigned int n = -1;
    unsigned int m = UINT_MAX +1;
    unsigned int t = -o;


    //cout << "The maximum number that a signed integer can range to is: " << INT_MAX << endl;
    cout << endl;
    cout << "The maximum number that an unsigned integer can range to is: " << UINT_MAX << endl;
    cout << "The 2's complement of -1 is: " << n << endl;
    cout << "The number INT_MAX + 1 becomes " << m << " in unsigned integer representation." << endl;

    cout << endl;
    //decimal to binary 
    cout << "Please enter in a negative integer: ";
    cin >> o;
    cout << "The binary representation of this integer is: ";

    unsigned int *a = UintToBinary(o); // we need to store this into a string
    cout << endl;
    cout << "The 2's complement of this number is: " << t << endl;

    unsigned int difference = UINT_MAX - o;
    cout << "The difference between UINT_MAX and the 2's complement of the integer is: " << difference << endl;

    cout << "This difference in binary format is:";
    unsigned int *d = UintToBinary(difference);
    cout << endl;

    cout << (*a ^ *d)<< endl;




    // cout << endl;
    // cout << *a << endl;
    // cout << endl;

    //perform 2's complement on binary


    cout << endl;




    return 0;

}

