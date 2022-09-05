#include <stdio.h>

const int SIZE = 8;

int main() 
{
    
    char name[SIZE];
    name[0] = 'A';
    name[1] = 'H';
    name[2] = 'Y';
    name[3] = 'E';
    name[4] = 'O';
    name[5] = 'N';
    name[6] = '\0';

    printf("My name is %s\n", name);


    return 0;
}