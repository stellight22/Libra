// Adding a Friend function allows a class to use a non-member function as if it were a member function 
//A friend function also gains access to the private data members of the class
#include <iostream>

using namespace std;

class Box;


class Box
{
    double width;

    public:
         //default specifier type when member variables andfunctions are not public?
        void setWidth(double w);
        friend void printWidth(Box h);
};


void Box::setWidth(double w)
{
    width = w;
}

void printWidth(Box h)
{
    cout << h.width;
}

int main()
{
    Box b;
    cout <<"frjen" <<endl;

    b.setWidth(5.8768767546);

    return 0; //program terminates properly
}


