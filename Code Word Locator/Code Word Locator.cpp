// Code Word Locator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string codeword = "banana";
    std::string longString = "Lorem ipsum dolor sit amet, consectetur adipiscing banana elit. Ut at orci vel risus tristique rutrum sed in dui.";

    std::size_t bananaSearch = longString.find("banana");

    std::cout << longString
        << "\nThe codeword is at position " << bananaSearch << ".";
}