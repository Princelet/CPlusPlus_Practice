// CPlusPlus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    /* 
    // Variable type examples
    int testInt = 69;
    unsigned testUnsigned = 100u;
    float testFloat = 0.5f;
    double testDouble = 1.3;
    bool testBool = false;
    float result = 70 / 100;

    char testChar = 'E';
    char firstNameOld[] = "Sam";


    std::string firstName = "Sam";
    std::string lastName = "Stewart";

    // Plus symbol combines sections
    std::string fullName = firstName + " " + lastName;

    // Can access string characters like an array
    char firstInitial = fullName[0];

    // Substr splits the string based on a position and length
    std::string firstInit = fullName.substr(0, 1);

    // You can find a position in the string of a certain character and store it with std::size_t
    // This is similar to an int
    std::size_t spacePos = fullName.find(" ");
    std::string initials = fullName.substr(0, 1);

    initials += fullName.substr(spacePos + 1, 1);
    std::cout << initials << "\n";


    // Example outputs to console

    std::cout << "Hello World, my friend.\n" 
        << "Why are you the default text?\n"
        << "Five more syllables.\n" << "\n";

    std::cout << testInt << "\n"
        << testFloat << "\n"
        << testBool << "\n"
        << testChar << "\n"
        << testDouble << "\n"
        << testUnsigned << "\n" << "\n";

    std::cout << fullName << "\n"
        << firstInitial << "\n" << "\n";

    // Practice Truncating
    std::string textFull = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut at orci vel risus tristique rutrum sed in dui.";
    std::string textTrunc = textFull.substr(0, 4);
    std::string textRest = textFull.substr(4, std::string::npos);
    std::cout << textTrunc << "\n"
        << textRest << "\n";


    // Input
    std::cout << "Please enter a word.\n";
    std::string entryString = "";

    // std::cin is used for input. The result of the input is stored in whatever variable you put it into.
    std::cin >> entryString;
    std::cout << "You typed " << entryString << "!\n";


    // Integer works too!
    std::cout << "Please enter a whole number.\n";
    int entryInt = 0;

    // The same thing works for numbers, but anything else is entered, it will not use the entry!
    // The next time cin is used, this entry will be used - probably breaking something!
    // We should use data validation here.
    std::cin >> entryInt;
    std::cout << "You typed " << entryInt << "!\n";


    // Floats also work
    std::cout << "Please enter a decimal.\n";
    float entryFloat = 0;

    // std::cin is used for input. The result of the input is stored in whatever variable you put it into.
    std::cin >> entryFloat;
    std::cout << "You typed " << entryFloat << "!\n";


    // By default cin only takes text up to the first space. GetLine fixes this
    std::cout << "Please enter a line of text.\n";
    std::string lineOfText = "";

    // std::cin is used for input. The result of the input is stored in whatever variable you put it into.
    std::getline(std::cin, lineOfText);
    std::cout << "You typed " << lineOfText << "!\n";

    */





    // Selection
    // If statements are essentially the same as C#
    bool decision = true;
    if (decision == true) 
    {
        std::cout << "Decision was true!\n";
    }
    else
    {
        std::cout << "Decision was false!\n";
    }


    // Advanced if statement: Ternary
    // Written in-line with other code, such as an assignment statement
    int ternResult = decision ? 1 : 2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
