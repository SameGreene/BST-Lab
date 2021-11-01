#ifndef NODE_H
#define NODE_H

#include "NodeInterface.h"

#include <iostream>
#include <string>

using namespace std;

class Node: public NodeInterface{
protected:
    Node* left = NULL;
    Node* right = NULL;
public:    
    Node();
    ~Node();

    int getData() const;
    NodeInterface* getLeftChild() const;
    NodeInterface* getRightChild() const;
};
#endif