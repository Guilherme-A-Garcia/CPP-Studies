// Basics - Introducing outputs and commenting

#include <iostream>
// "#include" acts basically import in Java or Python, in a superficial level.
// "iostream" is a headerfile that contains functions for basic i/o operations.

// v main function v
int main(){
    std::cout << "Hello world!\n"; // std = standard, cout = char output.
    // "<<" = outputs
    
    std::cout << "This is the second str output line." << std::endl; 
    // std::endl is the same as \n, but it also flushes the output buffer.
    
    // \n is better performance-wise, but it doesn't flush the buffer.

    /*
    Multi-line comments
    also work in C++!
    */

    return 0;  // 0 = "works fine", 1 = "something went wrong"
}
