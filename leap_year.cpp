// leap_year.cpp
// COP 2006 202405
// Tony Nguyen
// demo format of numbers for console I/O
// ------------------------------------------------------------
#include <iostream>
#include <iomanip>

// Global Constants
const float LEAP_YEAR_FACT = 4.2525f;

int main() {
    int age;
    std::cout << "\nEnter your age: ";
    std::cin >> age;

    float leapYears = age / LEAP_YEAR_FACT;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "You have been alive for " 
    << leapYears << " leap years\n";

    char ask;
    std::cout << "\nEnter a letter to exit: ";
    std::cin >> ask;

    return 0;
}
