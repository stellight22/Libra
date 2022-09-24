#include <iostream>

using namespace std;

class Icecream
{
    //access modifier(public, private, protected, default is private)  
    //recall self from python to compare this-> (the calling object)   
    private:
        int scoops;
        string flavor;
        double price;
        bool cone;

    public:
        Icecream()
        {
            scoops = 2;
            flavor = "chocolate";
            price = 6.99;
            cone = true;
        } 
        int getScoops() const
        {
            return scoops;
        }
        void setPrice(double pr)
        {
            price = pr;    
        }

        // bool operator >(Icecream &one)
        // {
        //     return this->price == one.price;
        // }

        bool operator >(Icecream &one)
        {
            cout << this->price <<endl;
            cout << one.price <<endl;
            return this->price > one.price;
        }

};

int main()
{
    Icecream mango, melon;
    mango.setPrice(5.99);
    melon.setPrice(2.99);
    cout << "mango on left" <<endl;
    if (mango > melon)     //
        cout << "true" <<endl;
    else
        cout << "false" <<endl;

    cout << "melon on left" <<endl;
    if (melon > mango)
        cout << "true" <<endl;
    else
        cout << "false" <<endl;

    return 0;
}