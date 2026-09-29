// Basics - Do while loops

#include <iostream>

int main(){
    // Do while loops are like while loops, but they execute the block of code first,
    // then repeat if the condition is true.
    int num;
    
    // std::cout << "Enter a positive number: ";
    // std::cin >> num;
    // while (num < 0){
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while(num < 0);

    std::cout << "The number is " << num << "\n";
    return 0;
}