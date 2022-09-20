// CPlusPlus Practice Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> // to use rand()
#include <time.h> // gets current absolute time

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
    /*
    
    

    BasicFunction();

    // Basically says paramInt = testInt
    int testInt = 4;
    ParameterFunc(testInt);

    int returnValue = ReturnFunc();

    std::cout << "Return Value = " << returnValue << "!\n";

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


    // Static Array
    int intArray[] = { 0, 1, 2 };
    const int intArraySize = 3; // Can only use a constant for array sizes
    int intArrayB[intArraySize]; // Will be filled with Garbage Data


    */
    


    /*

    // Declare a Vector
    std::vector<int> intVector;

    // Add items to vector using the "push_back" function.
    // This adds, no surprise, to the back of the vector. (the end)
    // Vector grows one size for every push_back, adding new value to the end.

    intVector.push_back(1); // Vector = { 1 }
    intVector.push_back(2); // Vector = { 1, 2 }
    intVector.push_back(74); // Vector = { 1, 2, 74 }

    // You can get the current size using the [vectorname].size() function.
    std::cout << "Vector is " << intVector.size() << " items long.\n";


    // You can access vector items like an array.
    std::cout << "Vector index 2 is " << intVector[2] << ".\n";

    // You can also change values at will, but an item MUST already exist in that index.
    intVector[2] = 45; // Vector = { 1, 2, 45 }
    std::cout << "Vector index 2 is " << intVector[2] << ".\n";

    // You can remove items from a vector.
    // Adding more items for an example.
    intVector.push_back(22);
    intVector.push_back(754);
    // Vector is now currently { 1, 2, 45, 22, 754 }
    

    // Items can be removed using the erase() function.
    // Erase uses iterators: markers for particular points in the vector.
    // Erase's procedure is non-inclusive of the end point.
    std::cout << "\nBefore erase!\n";
    std::cout << "Vector index 0 is currently " << intVector[0] << ".\n";
    std::cout << "Vector is " << intVector.size() << " items long.\n";
    
    // Let's erase the first two elements of the vector.
    // Parameter 1 - starting point = begin()
    // Parameter 2 - end point = begin() + number of elements
    intVector.erase(intVector.begin(), intVector.begin() + 2);

    std::cout << "\nAfter erase!\n";
    std::cout << "\nVector index 0 is now " << intVector[0] << ".\n";
    std::cout << "Vector is " << intVector.size() << " items long.\n\n";


    // Print all vector elements
    for (int i = 0; i < intVector.size(); ++i)
    {
        std::cout << "Vector index " << i << " is " << intVector[i] << ".\n";
        // Print out the value of the vector at current point
    }

    */

    /*
    // Generates a random number from 0 to RAND_MAX (very very large)
    // Rand uses a seed so it will be the same by default every time.
    int totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    totallyRandom = std::rand();
    std::cout << "Random number is: " << totallyRandom << "\n";
    */


    


    /*

    // Let's seed it!
    // A seed is the starting point for the random calculations. 
    // Every time you use the same seed, we get the same results.
    // Instead of manually seeding every time, we use the actual time to get it random and different every time.
    std::srand(time(NULL));

    // Most of the time, we don't want huge random numbers!
    // Let's say we only want between 0 and 100.
    int range = 100;

    // Modulo (%) allows us to use a division remainder to get the right range.
    int seededRandom = std::rand() % range;
    std::cout << "Seeded random number 1 is: " << seededRandom << "\n";
    seededRandom = std::rand() % range;
    std::cout << "Seeded random number 2 is: " << seededRandom << "\n";
    seededRandom = std::rand() % range;
    std::cout << "Seeded random number 3 is: " << seededRandom << "\n";
    */



    

}