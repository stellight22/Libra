#include <iostream>
#include <vector>

using namespace std; 

class K
{
    public:
    string goo = "GAGa";
};

class G
{
    int jelly = 8;
    vector <K> sandwich;

    public:
    void peanutButter(int r)
    {
        cout << "r: " << r <<endl;
        r = jelly;
        cout << "r: " << r <<endl;
    }

    void getButtered(int &r)
    {
        cout << "r: " << r <<endl;
        r = jelly;
        cout << "r: " << r <<endl;
    }

    void croissant(K x)
    {
        cout << "goo: " << x.goo <<endl;
        string q = "bleh" ;
        x.goo = q;
        cout << "q:" << q <<endl;
        cout << "goo:" << x.goo <<endl;
        
    }
    void jam(K &x)
    {
        cout << "goo: " << x.goo <<endl;
        string q = "bleh" ;
        x.goo = q;
        cout << "q:" << q <<endl;
        cout << "goo:" << x.goo <<endl;
        
    }

};

int main()
{
    G c;
    int yee = 9876;
    cout << "yee: " << yee << endl;
    c.peanutButter(yee);
    cout << "yee: "<< yee<<endl;
    
    cout << "second function: "<< endl;
    yee = 23984;
    cout << "yee: " << yee << endl;
    c.getButtered(yee);
    cout << "yee: "<< yee <<endl;

    //vector application
    G y;
    K x;
    //modify the string value in x using functions in G
    cout << "goo: " << x.goo <<endl;
    y.croissant(x);
    cout << "goo: " << x.goo <<endl;

    cout << "second function: "<< endl;
    cout << "goo: " << x.goo <<endl;
    y.jam(x);
    cout << "goo: " << x.goo <<endl;

    cout << x << endl;

    return 0;
}

