// Swear Bleeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string swear = "Banana";
    std::string input = "";

    std::cout << "Please enter a word\n";
    std::cin >> input;

    if (input == swear)
    {
        std::cout << "BLEEP";
    }
    else
        std::cout << input;
}
