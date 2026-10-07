// Basics - Nested loops

#include <iostream>

int main(){
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows? R: ";
    std:: cin >> rows;

    std::cout << "How many columns? R: ";
    std:: cin >> columns;

    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }

    return 0;
}