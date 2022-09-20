// Random Score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h> // to use rand()
#include <time.h> // gets current absolute time

int RandomScore(int minScore, int maxScore)
{
    int range = maxScore - minScore;
    int result = (rand() % range) + minScore;
    return result;
}
int main()
{
    int min = 10;
    int max = 500;
    srand(time(NULL));
    int score1 = RandomScore(min, max);
    int score2 = RandomScore(min, max);
    int score3 = RandomScore(min, max);
    int score4 = RandomScore(min, max);
    int score5 = RandomScore(min, max);


    std::cout << "Random Scores:\n"
        << score1 << "\n"
        << score2 << "\n"
        << score3 << "\n"
        << score4 << "\n"
        << score5;

}