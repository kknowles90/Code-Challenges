#include <vector>
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<string> fizzBuzzArray;

    for (int i = 1; i <= number; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            fizzBuzzArray.push_back("FizzBuzz");
        }
        else if (i % 3 == 0) {
            fizzBuzzArray.push_back("Fizz");
        }
        else if (i % 5 == 0) {
            fizzBuzzArray.push_back("Buzz");
        }
        else {
            fizzBuzzArray.push_back(to_string(i));//Will troubleshoot
        }
    }

    // Printing the contents of the array
    for (const auto& value : fizzBuzzArray) {
        cout << value << std::endl;
    }

    return 0;
}