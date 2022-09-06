// Insult Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool decisionOne = false;
    bool decisionTwo = false;

    std::string insultStart = "You are a ";
    std::string insultOne = "bumbling miscreant ";
    std::string insultTwo = "who can't code!";

    std::string insultFull = insultStart + insultOne + insultTwo;

    std::cout << insultFull;
}