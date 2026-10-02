// Basics - Break & Continue

#include <iostream>

int main(){
    // Break - Breaks out of a loop/switch
    // Continue - Skip current iteration

    for(int i = 1; i < 20; i++){
        if(i == 13){
            // break; // This will cut the loop short.
            continue; // 
        }
        std::cout << i << "\n";
    }
    
    return 0;
}