// Basics - Arithmetic operators

#include <iostream>
#include <ostream>


int main(){
    // int students = 20;

    // IMPORTANT! PEMDAS applies!
    int students = 6 - (5 + 4) * 3 / 2;
    
    // students = students + 1;
    // students+=1;
    // incrementing just 1:
    // students++;

    // students = students - 1;
    // students-=1;
    // students--;

    // students = students * 2;
    // students*=2;

    // students = students / 2;
    // students/=2;

    // students/=3;

    // int remainder = students % 3;

    std::cout << students << std::endl;
    // std::cout << remainder << std::endl;

    return 0;
}