//Reads in 5 scores and shows how much each
//score differs from the highest score.
#include <iostream>
using namespace std;

const int NUM_SCORES = 5;
void fillUp(int score[NUM_SCORES], int NUM_SCORES);

int main( )
{
    int i, score[NUM_SCORES], max;

    fillUp(score, NUM_SCORES);

    max = score[0];
    for (i = 1; i < NUM_SCORES; i++)
    {
        if (score[i] > max)
            max = score[i];
        //max is the largest of the values score[0],..., score[i].
    }

    cout << "The highest score is " << max << endl
         << "The scores and their\n"
         << "differences from the highest are:\n";
    for (int IndividScore : score)
        cout << IndividScore << " off by "
             << (max - IndividScore) << endl;


    return 0;
}

void fillUp(int score[NUM_SCORES], int NUM_SCORES)
{
    for (int i=0;i<NUM_SCORES;i++) {
        cout << "Enter " << NUM_SCORES << " scores:\n";
        cin >> score[i];
    }

}
