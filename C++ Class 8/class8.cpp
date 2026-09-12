// Basics - Accepting user input

// (!Unrelated but important: Instead of using std::endl for everything and wasting cycles
// waiting for the OS handshake to clear the buffer all the time, just stick to \n when
// you're not intentionally wanting to clear the buffer. 
// An example of a situation where you might want to clear it is 
// when you're dealing with exceptions.)

#include <iostream>
#include <ostream>

// cout << ( << is the insertion operator)
// cin >> ( >> is the extraction operator)
// (Keep in mind cout means character output and cin means character input)

int main(){
    std::string name;
    int age;

    // If you use std::cin before std::getline(), you end up picking up on a \n that is left
    // in the buffer. To avoid that, add ">> std::ws" to your getline() within the first argument,
    // this eliminates any new line characters or white spaces before any user input.
    std::cout << "How old are you? R: ";
    std::cin >> age;

    std::cout << "What's your name? R: ";
    // std::cin >> name; // You point to a variable to store the contents of your extracted input.
    // And if you wanna make sure whatever the user writes, including words separated by spaces:
    std:getline(std::cin >> std::ws, name);

    // std::cout << "How old are you? R: ";
    // std::cin >> age;

    std::cout << "Hello, " << name << "!\n" << "You are " << age << " years old.\n";

    // All in all, use std::getline() for strings that include spaces. 
    // Otherwise, stick with std::cin >>.

    return 0;
}