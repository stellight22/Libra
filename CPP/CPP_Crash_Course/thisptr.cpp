#include <iostream>

using namespace std;

class Icecream
{
    //access modifier(public, private, protected, default is private)     

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
        bool compareScoops(Icecream m1, Icecream m2)
        {
            if (m1.scoops == m2.scoops)
                return true;
            else
                return false;
        }
        bool comparePrice(Icecream m2)
        {
            if (this->scoops == m2.scoops)  //this implies the calling object
                return true;
            else
                return false;
        }
        

};

int main()
{
    Icecream mango, melon;
    cout << false << true << endl;
    cout << mango.compareScoops(mango, melon) <<endl;
    cout << melon.compareScoops(mango, melon) <<endl;
    cout << "this is SPARTA!" << endl;
    cout <<mango.comparePrice(melon)<<endl;
    cout <<mango.comparePrice(mango)<<endl;
    cout << melon.comparePrice(mango) <<endl;

    return 0;
}