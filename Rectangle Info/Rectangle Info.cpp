// Rectangle Info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Rectangle Info Task
	float length = 0.0f;
	float width = 0.0f;
	float perimeter = 0.0f;
	float area = 0.0f;

	// Input
	std::cout << "Please enter the length.\n";
	std::cin >> length;
	std::cout << "Please enter the width.\n";
	std::cin >> width;

	perimeter = length * 2 + width * 2;
	area = length * width;
	std::cout << "\nThe perimeter would be " << perimeter << ".\n";
	std::cout << "\nThe area would be " << area << ".\n";
}