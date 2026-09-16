// Practice - Calculating the hypotenuse of a right angled triangle
// c = sqrt(a²+b²)
#include <iostream>
#include<cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    // You could do this:
    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);

    // But you can shorten it:
    c = sqrt(pow(a,2) + pow(b, 2));

    std::cout << c << "\n";

    return 0;
}