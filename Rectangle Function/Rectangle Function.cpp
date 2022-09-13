// Rectangle Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int AreaCalc(int width, int height) {
    int result = width * height;
    return result;
}
int main()
{
    int rectWidth = 0;
    int rectHeight = 0;

    std::cout << "What's the width of the rectangle?\n";
    std::cin >> rectWidth;
    std::cout << "What's the height of the rectangle?\n";
    std::cin >> rectHeight;

    int result = AreaCalc(rectWidth, rectHeight);
    std::cout << result << " is the area of the rectangle.";
}