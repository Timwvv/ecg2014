#include <iostream>
#include <string>
#include <vector>
#include "node.h"

// CONSTRUCTORS ----------------------------------------------------------------
node::node(const std::string& name)
{
    this->name = name;
    this->node_id++;
    this->count_childs = 0;
}


// DESTRUCTOR ------------------------------------------------------------------
node::~node() // virtual reicht im Header-File
{
    std::cout << "enter ~node() of \"";
    std::cout << this->get_name();
    std::cout << "\"\n";
}


// METHODS ---------------------------------------------------------------------
void node::add_child(node newNode)
{
    this->childs.push_back(&newNode);
    this->count_childs++;
}

node * node::get_child(int id) const
{
    // if given ID is valid
    if(id < this->count_childs && id >= 0)
    {
        return this->childs.at(id);
    }
    // if given ID is invalid
    else
    {
        return NULL;
    }
}


// GETTERS & SETTERS -----------------------------------------------------------
std::string node::get_name() const
{
    return this->name;
}
    
void node::set_name(std::string name)
{
    this->name = name;
}

int node::get_nr_children() const
{
    return this->count_childs;
}


// VARIABLES -------------------------------------------------------------------
int node::node_id = 0;
