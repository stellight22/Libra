#include <iostream>
//#include <typeinfo>

using namespace std;

int main()
{
    int a = 1;
    float b = 2.2222222222222;
    cout << b << endl;
    double bb = 4.44444444444444;
    cout << bb << endl;
    char c = 'c';
    bool yn = true;
    //void v;
    //nullptr g;

    cout << "int is type \n" << typeid(a).name();
    cout << "float is type " << typeid(b).name() <<endl;
    cout << "double is type " << typeid(bb).name() <<endl;
    cout << "char is type " << typeid(c).name() <<endl;
    cout << "bool is type " << typeid(yn).name() <<endl;

    cout << "When I add an int with a float, the answer is " << a + b << endl;
    cout << "When I divide a float by an int, the answer is " << bb/a <<endl;
    //cout << "void is type" << typeid.(v).name() <<endl;
    //cout << "nullptr is type" << typeid.(g).name() <<endl;

    return 0;
}