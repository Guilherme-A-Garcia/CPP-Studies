// Basics - Conditional statements
#include <iostream>

// If statements = Do x if y condition is either true or false,
//                 else, do something else.

int main(){
    int age;
    std::cout << "Insert your age: ";
    std::cin >> age;

    if(age > 100){
        std::cout << "Age above 100. Stopping execution.\n";
    }
    else if(age >= 18){
        std::cout << "18 or above. Proceeding.\n";
    }
    else if(age < 0){
        std::cout << "Age below 0. Stopping execution.\n";
    }
    else{
        std::cout << "Age below 18. Stopping execution...\n";
    }

    return 0;
}