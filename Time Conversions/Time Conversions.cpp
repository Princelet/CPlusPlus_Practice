// Time Conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Time Conversions
	float hours = 0.0f;
	float minutes = 0.0f;
	int seconds = 0;

	// Hours to minutes and seconds
	std::cout << "Please enter an amount of time in hours.\n";
	std::cin >> hours;

	minutes = hours * 60;
	seconds = minutes * 60;

	std::cout << "\nThis time is equal to " << minutes << " minutes.\n";
	std::cout << "\nThis time is equal to " << seconds << " seconds.\n" << "\n\n";


	// Seconds to minutes and hours
	std::cout << "Please enter an amount of time in seconds.\n";
	std::cin >> seconds;

	minutes = seconds / 60;
	hours = minutes / 60;

	std::cout << "\nThis time is equal to " << minutes << " minutes.\n";
	std::cout << "\nThis time is equal to " << hours << " hours.\n";
}