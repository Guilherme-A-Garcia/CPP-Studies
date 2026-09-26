// x - y

#include <iostream>

int main(){
    std::string name;
    std::string email;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .empty() returns whether a given string is empty
    if(name.empty()){
        std::cout << "You must enter a name.\n";
    }
    // .length() returns the amount of characters in a string
    else if (name.length() > 12){
        std::cout << "Your name cannot be over 12 characters.\n";
    }
    else{
        std::cout << "Welcome " << name << "\n";
    }

    // .append() adds something to an existing string
    email = name;
    email.append("@gmail.com");
    std::cout << email << "\n";

    // name.clear(); // .clear()
    // std::cout << name << "\n";

    // .at() returns whatever character is at a provided index
    std::cout << name.at(2) << "\n";

    // .insert() inserts a string in the position of a given index
    name.insert(0, "@");
    std::cout << name << "\n";

    // .find() returns the number of occurrences of a char or str in a string
    std::cout << name.find(' ') << "\n";

    // .erase() erases part of a string given a quantity of characters to delete,
    //  starting from a provided index.
    name.erase(0, 5);

    std::cout << name << "\n";

    return 0;
}