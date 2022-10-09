#include <iostream>
#include <vector>

using namespace std; //std: short for standard library
//data type array vs library array in C++

int main()
{
    //declaration of vector
    //you initialize a vector using a constructor
    vector <int> pbj(5); // this initialization is through a vector constructor like passing parameter to constructor
    int a = 1; 

    cout<<"type:"<<typeid(pbj).name()<<endl;
    //size:NSt3__16vectorIiNS_9allocatorIiEEEE

    cout<<"Size:"<<pbj.size()<<endl;
    //Size:5

    pbj.push_back(7);

    cout<<"Size:"<<pbj.size()<<endl;
    //Size:6

    for (int i = 0; i< pbj.size();i++)
    {
        cout << pbj[i]<<endl;
    }

    return 0;
}

//////scratch
//vectors are an expandable form of arrays
//part of the stl (standard template library) of C++, so you need to include <vector>
//std: short for standard library
//data type array vs library array in C++
//you can modify a vector size, and can modify the beginning AND end of a vector
//vecto allows forward declaration, where you can create the vector first and you don't have to
//specify the size or initialize
