//
// Created by Ahyeon  on 9/3/22.
//
#include <iostream>
using namespace std;

int main( )
{
    int i, score1, score2,score3,score4,score5,max;

    cout << "Enter 5 scores:\n";
    cin >> score1;
    cin >> score2;
    cin >> score3;
    cin >> score4;
    cin >> score5;

    if ((score1>score2)&&(score1>score3)&&(score1>score4)&&(score1>score5))
        max=score1;
    else if ((score2>score1)&&(score2>score3)&&(score2>score4)&&(score2>score5))
        max=score2;
    else if ((score3>score1)&&(score3>score2)&&(score3>score4)&&(score3>score5))
        max=score3;
    else if ((score4>score1)&&(score4>score2)&&(score4>score3)&&(score4>score5))
        max=score4;
    else if ((score5>score1)&&(score5>score2)&&(score5>score3)&&(score5>score4))
        max=score5;


    cout << "The highest score is " << max << endl
         << "The scores and their\n"
         << "differences from the highest are:\n";

    cout << score1 << " off by "
         << (max - score1) << endl;
    cout << score2 << " off by "
         << (max - score2) << endl;
    cout << score3 << " off by "
         << (max - score3) << endl;
    cout << score4 << " off by "
         << (max - score4) << endl;
    cout << score5 << " off by "
         << (max - score5) << endl;

    return 0;
}
