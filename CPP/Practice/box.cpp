#include <iostream>

using namespace std;

class Box
{
public:
    double width; //default specifier type when member variables andfunctions are not public?
    void setWidth(double w);
};

int main()
{
    Box b;
    cout <<"frjen" <<endl;

    b.setWidth(5.8768767546);

    return 0; //program terminates properly
}
