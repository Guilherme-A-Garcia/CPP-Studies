// Application Flow - Ternary operator


#include <iostream>

int main(){
    // Ternary operator: ?: = Replacement to an if/else statement
    // Condition ? expression1 : expression2;
    int grade = 75;

    // Instead of this:
    // if(grade >= 60){
    //     std::cout << "You pass.";
    // }
    // else{
    //     std::cout << "You fail.";
    // }

    // You can do this:
    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail.\n"; 

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd\n" : std::cout << "Even\n";

    bool hungry = true;

    // hungry ? std::cout << "You are hungry.\n" : std::cout << "You are full.\n";
    std::cout << (hungry ? "You are hungry.\n" : "You are full.\n");

    return 0;
}