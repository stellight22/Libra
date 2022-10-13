#include <iostream>
using namespace std;

int main()
{
    /////////////////////
    //Division (/)
    ///////////////////

	//order matters in division, note that numbers become rounded down for integers
    int div1 = 2;
    int div2 = 3;
    int div3 = div1 / div2;
    cout << "div3: " << div3 << endl;
    div3 = div2 / div1;
    cout << "div3: " << div3 << endl;


	//order matters in division with negative numbers as well
	div1 = 2;
    div2 = -4;
    div3 = div1 / div2;
    cout << "div3: " << div3 << endl;
    div3 = div2 / div1;
    cout << "div3: " << div3 << endl;


    //working with unsigned int
	unsigned div4 = -2;
    unsigned div5 = 4;
    unsigned div6 = div4 / div5;
    cout << "unsigned div6: " << div6 << endl;
    div6 = div5 / div4;
    cout << "unsigned div6: " << div6 << endl;

    //working with signed int
	signed div7 = 1;
    signed div8 = 4;
    signed div9 = div7 / div8;
    cout << "signed div6: " << div9 << endl;
    div9 = div8 / div7;
    cout << "unsigned div9: " << div9 << endl;

    return 0;

}