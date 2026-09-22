// Basics - Logical operatos

#include <iostream>

int main(){
    // && - Check if two conditions are true. (AND operator)
    // || - Check if at least one condition is true. (OR operator)
    // ! - Reverses the logical state of its operand. (NOT operator)

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if(temp > 0 && temp < 30){
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad.\n";
    }
    else{
        std::cout << "The temperature is good.\n";
    }

    if(!sunny){
        std::cout << "It's cloudy outside.";
    }
    else{
        std::cout << "It's sunny outside.";
    }

    return 0;
}