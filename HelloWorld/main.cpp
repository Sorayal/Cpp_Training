// declares cout and endl
#include <iostream>

//instead using std::cout it´s possible to use the whole namespace, but it´s not recommended
// seems to be like Java packages.
//using namespace std;

// functions needs to be declared here firstly to use them later.
void printMessage();
int calculateSum(int a, int b);

// main method/function where the program starts
int main() {

    // console output stream
    std::cout << "Hello, World!" << std::endl;
    printMessage();
    // Concat String with int result using to_string function
    std::cout << "Result of 2 + 5: " + std::to_string(calculateSum(2, 5)) << std::endl;
    // the main function returns 0 for successful run
    return 0;
}
// no static necessary like in Java where an instance or static would be necessary
// structural / imperative style
void printMessage() {
    std::cout << "Hello from print method!!" << std::endl;
}

int calculateSum(int a, int b){
    return a + b;
}



