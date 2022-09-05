//
// Created by Ahyeon  on 9/3/22.
//Assumes correct user input of month from 1-12

#include <iostream>
using namespace std;

struct Name
{
    string first;
    char lastInitial;
};

struct Fruit
{
    int month;
    string name;
    string taste;
};

void getName(Fruit &fruit);

void display(Fruit& fruit);


int main( )
{

    Name name = {"Sally", 'M'};
    cout <<"The Name is: ";
    cout<<name.first;
    cout <<" ";
    cout<<name.lastInitial << endl;

    Fruit yum;

    Fruit peach = {12, "peach", "sour"};
    display(peach);

    getName(yum);
    display(yum);




    return 0;
}

void getName(Fruit& fruit)
{
    cout << "What is your favorite fruit?" << endl;
    cin >> fruit.name;
    cout << "Which month is it grown?(Number only)" << endl;
    cin >> fruit.month;
    cout << "How does it taste?";
    cin >> fruit.taste;

}

void display(Fruit& fruit)
{
    cout << "The fruit ";
    cout << fruit.name;
    cout <<" grows in the ";
    if (fruit.month ==1)
    {
        cout << fruit.month;
        cout << "st month of the year";
    }
    else if (fruit.month == 2)
    {
        cout << fruit.month;
        cout << "nd month of the year";
    }
    else if (fruit.month == 3)
    {
        cout << fruit.month;
        cout << "rd month of the year";
    }
    else
    {
        cout << fruit.month;
        cout << "th month of the year";
    }

    cout << " and tastes ";
    cout <<fruit.taste << endl;
}
