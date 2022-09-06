// Which Way.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int path = 1;

    std::cout << "You are in a thick forest.\n"
        << "You reach a clearing and see four possible paths to continue down.\n\n"
        << "The first is rather clear and visibly travelled down. Signs point you in this direction.\n"
        << "The second looks rougher and seems to have animal tracks going down the overgrown trail.\n"
        << "The third looks like it leads to a beat up fence gate not too far away.\n"
        << "The fourth and final looks almost identical to the first, but the path looks like it has been used a lot less.\n\n"
        << "Which trail do you follow? (Enter a Number)\n";
    std::cin >> path;


    switch (path)
    {
    case 1:
    {
        std::cout << "\nThe overly safe trail is filled with signs of different directions and warnings.\n"
            << "You end up confused and lost in the seemingly endless sea of paths and signposts!\n"
            << "It takes you a few days, but you make it through at last...\n"
            << "Only to end up back at the four paths!\n";
        break;
    }

    case 2:
    {
        std::cout << "\nThe worn down path leads you to a small village.\n"
            << "Those living there welcome you with open arms.\n"
            << "They give you supplies and a room for the night so you can continue on your way tomorrow.\n";
        break;
    }

    case 3:
    {
        std::cout << "\nYou open the creaky gate and come to a cottage.\n"
            << "A boy greets you. This is his family's house. They apparently haven't had a guest in forever.\n"
            << "You foolishly enter the house, never to be seen again.\n";
        break;
    }

    case 4:
    {
        std::cout << "\nThe path leads you to an intimidating cave entrance.\n"
            << "You enter and end up in a labyrinth of traps! You eventually reach the end...\n"
            << "You find endless treasure! You take as much of it as you can and head home."
            << "You arrive with your riches and relax for the night, thinking of what you'll use it for as you drift asleep.\n";
        break;
    }

    default:
    {
        std::cout << "\nYou were too indecisive and paid for it.\n"
            << "A bear that was following you chases you into the wilderness.\n"
            << "It takes you weeks to find your way out, only to have no idea where you arrived!\n"
            << "Good luck getting home!\n";
        break;
    }
    }
}