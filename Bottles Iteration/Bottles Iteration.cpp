// Bottles Iteration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int bottles = 99;
    std::string answer = "";
    bool keep = true;

    do
    {
        std::cout << bottles << " bottles of beer on the wall.\n"
            << "Drink one? (Yes or No)\n";
        std::cin >> answer;

        if (answer == "Yes" || answer == "yes")
        {
            --bottles;
        }
        else
        {
            std::cout << "You leave the bottles alone. " << bottles << " stay standing.";
            keep = false;
        }
    } while (bottles > 0 && keep == true);
}