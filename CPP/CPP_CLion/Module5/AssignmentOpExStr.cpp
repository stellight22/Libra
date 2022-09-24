//
// Created by Ahyeon  on 9/20/22.
// Uses string class example

#include <iostream>

using namespace std;

StringClass& StringClass::operator=(const StringClass& rtSide)
{
    if(this == &rtSide)
        return *this;
    else
    {
        capacity = rtSide.length;
        //length
        length = rtSide.length;
        delete [] a;
        a = new char[capacity];
        for (int i = 0; i<length; i++)
            a[i] = rtSide.a[i];
        return *this;
    }
}

int main()
{
    return 0;
}