// Date of Birth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string month = "January";
    int year = 0;
    int day = 0;
    std::string ending = "th";

    // Input
    std::cout << "What year were you born in? (Number)\n";
    std::cin >> year;
    std::cout << "Which month were you born in? (Word)\n";
    std::cin >> month;
    std::cout << "What day of the month were you born on? (Number)\n";
    std::cin >> day;

    // Figure out the ending of the number if ending in 1, 2 or 3 (not counting teens)
    if (day == 1 || day == 21 || day == 31)
    {
        ending = "st";
    }
    else if (day == 2 || day == 22)
    {
        ending = "nd";
    }
    else if (day == 3 || day == 23)
    {
        ending = "rd";
    }

    std::cout << "\nYou were born on the " << day << ending << " of " << month << ", " << year << ".\n";
}