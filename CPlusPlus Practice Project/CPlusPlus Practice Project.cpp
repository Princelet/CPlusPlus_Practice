// CPlusPlus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void BasicFunction() {
    std::cout << "Basic Function Ran!\n\n";
}

void ParameterFunc(int paramInt) {
    ++paramInt;
    std::cout << "Parameter Function ran - paramInt = " << paramInt << "!\n";
}

int ReturnFunc() {
    return 42;
}

int main()
{
    BasicFunction();

    // Basically says paramInt = testInt
    int testInt = 4;
    ParameterFunc(testInt);

    int returnValue = ReturnFunc();

    std::cout << "Return Value = " << returnValue << "!\n";

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




    /*

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

    // Switch/Case statement
    int errorCode = 2;

    switch (errorCode)
    {
    case 0:
     {
        std::cout << "Error 0.";
        break;
    }

    case 1:
    {
        std::cout << "Error 1.";
        break;
    }

    case 2:
    {
        std::cout << "Error 2.";
        break;
    }

    default: 
    {
        std::cout << "An unknown error occurred.";
        break;
    }
    }

    // Advanced if statement: Ternary
    // Written in-line with other code, such as an assignment statement
    int ternResult = decision ? 1 : 2;

    */



    /*

    // Selection
    // While loop
    bool whilst = true;
    while (whilst == true)
    {
        whilst = false;
    }

    // Do While loop
    int doI = 0;
    do {
        ++doI;
        std::cout << "do while ran " << doI << " times!\n";
    } while (doI<2);

    // For loop
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "for loop ran " << i + 1 << " times!\n";
    }

    */
    
    // Static Array
    int intArray[] = { 0, 1, 2 };
    const int intArraySize = 3; // Can only use a constant for array sizes
    int intArrayB[intArraySize]; // Will be filled with Garbage Data
    
}