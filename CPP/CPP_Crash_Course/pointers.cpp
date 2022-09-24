#include <iostream>

using namespace std;

int main()
{
    int j = 0;
    int *i = &j;

    cout << i <<endl;
    cout <<*i <<endl;
    cout << &j <<endl;
    cout << &i <<endl;

    return 0;
}