// Basics - Useful math-related functions

#include <iostream>
#include <cmath>

int main(){
    double x = 3.14;
    double y = 4;
    double z;

    // std::max returns the biggest value within the provided values.
    // z = std::max(x, y);

    // std::min returns the smallest value within the provided values.
    // z = std::min(x, y);
    
    // pow() returns the result of the first value to the power of the second one.
    // z = pow(x, y);

    // abs() returns how far a number is from 0.
    // z = abs(-7);

    // round() rounds numbers based on the decimal portions
    // z = round(x);

    // ceil(), meaning ceiling, rounds numbers up 
    // z = ceil(x);

    // floor() rounds numbers down
    z = floor(x);
    
    std::cout << z << "\n";

    return 0;
}