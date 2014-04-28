// doppeltes einbinden verhindern
#ifndef NODE_H
#define NODE_H

// CLASSES ---------------------------------------------------------------------
class node
{ 
  private:
    static int node_id;
    int count_childs;
    std::string name;
    std::vector<node *> childs;

  public:
    // CONSTRUCTORS ------------------------------------------------------------
    node(const std::string& name);
    
    // DESTRUCTOR --------------------------------------------------------------
    virtual ~node();

    // MEHTODS -----------------------------------------------------------------
    void add_child(node newNode);
    node * get_child(int id) const;
    
    // GETTERS & SETTERS -------------------------------------------------------
    std::string get_name() const;
    void set_name(std::string name);
    int get_nr_children() const;
};

#endif
