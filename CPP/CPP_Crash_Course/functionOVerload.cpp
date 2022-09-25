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
            cout << "feet: "<< feet << " " << "inches: " << inches <<endl;
        }
        void DisplayDistance(int i)
        {
            cout << "feet: "<< feet << "i" << "inches: " << inches <<endl;
        }
        //function overloading is when functions with the same name differ by argument 
        //and the compiler determines which function should be called based on the arguments passed
        //
        //operator overloading follows a similar concept as f.overload, but is different
        //oo is 

};

int main()
{
    Distance D1(11,10), D2(-5,11);

    D1.DisplayDistance();

    D2.DisplayDistance();

    D1.DisplayDistance(3);
    D2.DisplayDistance(3);

    return 0;
}