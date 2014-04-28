// Compiling:
// g++ -g -Wall -Wextra -pedantic-errors main.cpp node.cpp -o main.bin


#include <iostream>
#include <string>
#include <vector>
#include "node.h"

// MAIN FUNCTION ---------------------------------------------------------------
int main()
{
    node myNode("Hello World\n");
    std::cout << myNode.get_name();
    node my2ndNode("2nd\n");
    myNode.add_child(my2ndNode);
    std::cout << (myNode.get_child(1))->get_name();
    
    return 0;
}
