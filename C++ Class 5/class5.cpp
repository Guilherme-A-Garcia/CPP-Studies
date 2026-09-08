// Basics - Typedef

// Typedef: Reserved keyword used to create an additional name (alias)
// for an existing type.
// Helps with readability and reduces typos.
// Important: typedef has largely been replaced with "using" because it 
// works better with templates.

#include <iostream>
// #include <vector>

// A common convention for typedef is to end the new data type with "_t"
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

// Using "using" instead (no pun intended):
using text_t = std::string;
using number_t = int;

int main(){
    // std::vector<std::pair<std::string, int>> pairlist;
    // pairlist_t pairlist;

    // std::string firstName = "John";
    text_t firstName = "John";

    // int t age = 20;
    number_t age = 20;

    std::cout << firstName << std::endl;
    std::cout << age << std::endl;

    return 0;
}