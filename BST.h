#ifndef BST_H
#define BST_H

#include "BSTInterface.h"
#include "Node.h"

#include <iostream>
#include <string>

using namespace std;

class BST: public BSTInterface{
protected:
    Node* root;
public:
    BST();
    ~BST();

    Node* getRootNode() const;
    bool add(int data);
    bool add(Node* currentNode, int data);
    bool remove(int data);
    void clear();
};
#endif