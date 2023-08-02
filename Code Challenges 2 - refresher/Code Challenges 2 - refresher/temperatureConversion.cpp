#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int tempConversion() {
    double celsius;

    // Input the temperature in Celsius
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    // Calculate the temperature in Fahrenheit
    double fahrenheit = celsiusToFahrenheit(celsius);

    // Output the result
    std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;

    return 0;
}
