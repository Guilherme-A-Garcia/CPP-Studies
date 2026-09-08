// Basics - Namespaces

// Namespaces provide a solution for preventing naming conflicts in large projects.
// Each entity needs a unique name. A namespace allows for identically named entities,
// as long as the namespaces are different.

#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    int x = 0;

    std::cout << x << std::endl;

    // This is how you utilize the same variable name, but from other namespaces:
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;

    // If you want to use a namespace for the entire class as a default:
    // using namespace <name>;

    // You can use this line so you don't need to keep typing std::<...>, but
    // there's a high likelyhood of you running into naming conflicts:
    // using namespace std;

    // Alternatively, you can use these safer options, though it's still not good practice:
    using std::string;
    using std::cout;
    using std::endl;
    cout << "Test" << endl;

    return 0;
}