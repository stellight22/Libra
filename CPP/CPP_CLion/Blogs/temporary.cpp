#include <iostream>

using namespace std;

void transfer(int n, int m)
{
    int t;         //t is a local variable
    t = n*m;    //any variable visible in the program is either local or global
    cout << "t: "<< t << endl;

}

int main()
{
    //a variable available in main will be available throughout the entire program
    int a =10;
    int b = 9;
    int c = 10;
    cout <<"A: " << a <<" B: " << b <<" C: " << c << endl;
    //value of b is put into a
    a = b;
    cout <<"A: " << a <<" B: " << b <<" C: " << c << endl;
    //value of b and c and multiplied and put into temp memory and then put into a
    a = b*c;
    cout <<"A: " << a <<" B: " << b <<" C: " << c << endl;

    transfer(a, b);
    return 0;
}

