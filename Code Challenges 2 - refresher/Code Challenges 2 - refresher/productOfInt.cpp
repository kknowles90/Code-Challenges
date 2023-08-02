//Given two floating - point numbers, create a C++ program that gives you the product of the two.

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100; // Maximum number of inputs (you can change this if needed)
    float numbers[MAX_SIZE];
    int numInputs;

    // Input the number of values to be multiplied
    cout << "Enter the number of floating-point values to be multiplied: ";
    cin >> numInputs;

    if (numInputs <= 0 || numInputs > MAX_SIZE) {
        cout << "Invalid number of inputs. It should be between 1 and " << MAX_SIZE << endl;
        return 1;
    }

    // Input the floating-point numbers
    for (int i = 0; i < numInputs; ++i) {
        cout << "Enter floating-point value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculate the product of all numbers
    float product = 1.0;
    for (int i = 0; i < numInputs; ++i) {
        product *= numbers[i];
    }

    // Output the result
    cout << "The product of the entered floating-point numbers is: " << product << endl;

    return 0;
}
