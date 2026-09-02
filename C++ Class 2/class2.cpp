// Basics - Introducing variables

#include <iostream>

int main(){
    // int x; // Declaration
    // x = 98; // Assignment

    // int stores integers
    int x = 98;  // Declaration + assignment
    int y = 5;
    int sum = x + y;
    int age = 20;
    
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;

    // doubles store decimals
    double price = 10.99;
    double gpa = 3.0;
    double temperature = 25.4; 

    std::cout << price << std::endl;

    // char stores a single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    std::cout << initial << std::endl;

    // booleans can store two values: true and false
    bool student = true;
    bool power = false;
    bool forSale = true;

    // strings store multiple characters
    std::string name = "John";
    std::string food = "tacos";
    std::string day = "Friday";

    std::cout << "Hello, " << name << "." << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}