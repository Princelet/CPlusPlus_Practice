// Who's in your party.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // to use rand()
#include <time.h> // gets current absolute time

int main()
{
    std::vector<std::string> partyNames;

    std::string input = "";

    do
    {
        std::cout << "Enter the next party member's name, or Q to quit.\n";
        std::cin >> input;

        if (input != "Q")
        {
            partyNames.push_back(input);
        }

    } while (input != "Q");

    std::cout << "\nYour party is:\n";

    for (int i = 0; i < partyNames.size(); ++i)
    {
        std::cout << partyNames[i] << "\n";
    }
}