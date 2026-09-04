// Basics - Introducing constants

#include <iostream>

int main(){
    // To avoid someone changing a variable, prefix it with "const".
    // A common naming convention is to make every letter uppercase.
    const double PI = 3.14159;
    // PI = 420.69; It's not possible to alter a constant's value.
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << std::endl;

    const int LIGHT_SPEED = 299792458;
    
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    return 0;
}