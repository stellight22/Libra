#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // int j = 0;
    // int *i = &j;

    // cout << i <<endl;
    // cout <<*i <<endl;
    // cout << &j <<endl;
    // cout << &i <<endl;

    // int arr[6];
    // int *k = arr;
    // arr[0] = 9;
    // cout << " "<< endl;
    // cout << arr <<endl;
    // cout << &arr <<endl;
    // cout << &arr[0] <<endl;
    // cout << &arr[1] <<endl;
    // cout << &arr[2] <<endl;
    // cout << &arr[3] << endl;
    // cout <<*k <<endl;
    // cout << &k <<endl;
    // cout << k << endl;
    // cout << k[0] << endl;

    // int arr2[4];
    // int *r = arr2;
    // arr2[0] = 7;
    // arr2[1] = 1;
    // cout << " "<< endl;
    // cout << arr2 <<endl;
    // cout << *arr2 <<endl;
    // cout <<"r[0]: " << r[0]<<endl;
    // cout <<"r[1]: " << r[1]<<endl;
    // cout << &r <<endl;
    // cout << r << endl;
    // cout << &arr2 <<endl;

    //vectors
    //new operator 
    vector <int> *p = new vector <int>(6, 8);
    cout << p << endl;
    cout << p->at(0)<< endl;

    return 0;
}