// Compiling:
// g++ -g -Wall -Wextra -pedantic-errors main.cpp node.cpp -o main.bin


#include <iostream>
#include <string>
#include <vector>
#include "node.h"

// MAIN FUNCTION ---------------------------------------------------------------
int main()
{
    // create tree root
    node * myTree = new node("root");
    
    // create objects of class node
    node leaf1("left child");
    node leaf2("right child");
    
    // add nodes as leafs to tree
    myTree->add_child(leaf1);
    myTree->add_child(leaf2);
    
    // delete tree
    delete myTree;
    
    return 0;
}
