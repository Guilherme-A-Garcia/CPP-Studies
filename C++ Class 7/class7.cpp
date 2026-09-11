// Basics - Type conversion

// Type conversion = Conversion of a value of one data type to another.
// Implicit - Automatic
// Explicit - Precede value with new data type (int) x

#include <iostream>
#include <ostream>

int main(){

    // int x = 3.14; Converts implicitly the stored value to int (truncates .14).
    // double x = (int)3.14; Explicitly converts 3.14 to int.
    // char x = 100; Implicitly converts the number 100 to its equivalent char in the ASCII table.


    // std::cout << x << std::endl;
    // std::cout << (char)100 << std::endl;
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << std::endl;



    return 0;
}