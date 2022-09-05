#include <stdio.h>
#include <typeinfo>


int main()
{
    int a = 1;    //%d
    float b = 2.2; //%f
    double bb = 4.44444;    //%f or %Lf
    char c = 'c';     //%c
    bool yn = true; 
    //void v;
    //nullptr g;

    printf("%d is type %s \n", a, typeid(a).name());
    printf("%f is type %s \n", b, typeid(b).name());
    printf("%lf is type %s \n", bb, typeid(bb).name());
    printf("%c is type %s \n", c, typeid(c).name());

    

    printf( "When I add an int with a float, the answer is %f\n", a+b);
    printf("When I divide a float by an int, the answer is %lf\n", bb/a);
    //cout << "void is type" << typeid.(v).name() <<endl;
    //cout << "nullptr is type" << typeid.(g).name() <<endl;

    return 0;
}