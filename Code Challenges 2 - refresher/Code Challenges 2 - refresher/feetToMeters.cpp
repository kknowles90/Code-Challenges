#include <iostream>

double metersToFeet(double meters) {
    const double metersToFeetFactor = 3.28084;
    return meters * metersToFeetFactor;
}

//change to main to run, feetToMeter otherwise
int feetToMeter() {
    double meters;

    // Input the measurement in meters
    std::cout << "Enter the measurement in meters: ";
    std::cin >> meters;

    // Calculate the measurement in feet
    double feet = metersToFeet(meters);

    // Output the result
    std::cout << meters << " meters is equal to " << feet << " feet." << std::endl;

    return 0;
}

