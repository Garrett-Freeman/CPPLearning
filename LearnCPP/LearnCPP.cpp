// LearnCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array> // Include the header for std::array

// Function declarations
// Task 1
int sum(int a, int b);
int sum(int a, int b, int c);
int product(int a, int b);
int average(int a, int b);
int printOneToOneHundred();
int getTopThreeIntegers(int arr[], int size, int topThree[]);

// Task 2

int main()
{
    std::cout << "Hello World!\n";

    int a = 5, b = 10, c = 15;
    std::cout << "Sum: " << sum(a, b) << "\n";
    std::cout << "Function Overload Sum: " << sum(a, b, c) << "\n";
    std::cout << "Product: " << product(a, b) << "\n";
    std::cout << "Average: " << average(a, b) << "\n";
	printOneToOneHundred();

    int myArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	getTopThreeIntegers(myArray, 10, new int[3]);


	return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int product(int a, int b) {
    return a * b;
}

int average(int a, int b) {
    return (a + b) / 2;
}

int printOneToOneHundred() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}

int getTopThreeIntegers(int arr[], int size, int topThree[]) {
    if (size < 3) {
        return -1; // Not enough elements
    }
    // Initialize top three
	// INT_MAIN is a preprocessor macro that represents the minimum integer value
	// Iinitialize the top three integers to the smallest possible value
    topThree[0] = topThree[1] = topThree[2] = INT_MIN;

	// Iterate through the array to find the top three integers
    for (int i = 0; i < size; ++i) {
        if (arr[i] > topThree[0]) {
            topThree[2] = topThree[1];
            topThree[1] = topThree[0];
            topThree[0] = arr[i];
        } else if (arr[i] > topThree[1]) {
            topThree[2] = topThree[1];
            topThree[1] = arr[i];
        } else if (arr[i] > topThree[2]) {
            topThree[2] = arr[i];
        }
    }
    std::cout << "First: " << topThree[0] << "\n";
    std::cout << "Second: " << topThree[1] << "\n";
    std::cout << "Third: " << topThree[2] << "\n";

    return 0;
}