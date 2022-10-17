// declares cout and endl
#include <iostream>

//instead using std::cout it´s possible to use the whole namespace, but it´s not recommended
// seems to be like Java packages.
//using namespace std;

void printMessage();

void calculateSum(int i, int i1);

// main method/function where the program starts
int main() {

    // console output stream
    std::cout << "Hello, World!" << std::endl;
    printMessage();
    // the main function returns 0 for successful run
    return 0;
}
// no static necessary like in Java where an instance or static would be necessary
// structural / imperative style
void printMessage() {
    std::cout << "Hello from print method!!" << std::endl;
}



