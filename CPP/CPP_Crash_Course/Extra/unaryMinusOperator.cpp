#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet;
        int inches;

    public: 
        Distance()
        {
            feet = 0;
            inches = 0;
        }
        Distance (int f, int i)
        {
            feet = f;
            inches = i;
        }
        void DisplayDistance()
        {
            cout << "feet: "<< feet << "inches: " << inches <<endl;
        }
        Distance operator-()
        {
            feet = 5;
            inches = 5;

            return Distance(feet, inches);
        }
        //operator overloading is unlike function overloading because the same name function
        //might not be in the program but exists in the headerfile/namespace of c++ library
        //you use the keyword operator
        //you use it for your own purpose for the class that you have created
        //you want to make use of the operator for your class
};

int main()
{
    Distance D1(11,10), D2(-5,11), D4(9,7);

    -D1;
    D1.DisplayDistance();

    -D2;
    D2.DisplayDistance();


    return 0;
}