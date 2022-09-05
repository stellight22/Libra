//c++ program to demonstrate the working of getline(), push_back() and pop_back()
#include <iostream>
#include <string> //for string class
using namespace std;

//Driver code
int main()
{
    //declaring string
    string str;

    //
    cout << "Enter your string here: " <<endl;

    //taking string input using getline()
    getline(cin, str);


    //display the string
    cout << "The initial string is :";
    cout << str << endl;

     cout <<  str.capacity() <<endl;

    return 0;
}