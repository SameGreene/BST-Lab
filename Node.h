#ifndef NODE_H
#define NODE_H

#include "NodeInterface.h"

#include <iostream>
#include <string>

using namespace std;

class Node: public NodeInterface{
public:
    Node* left = NULL;
    Node* right = NULL;
    int value;    
    
    Node(int data);
    ~Node();

    int getData() const;
    Node* getLeftChild() const;
    Node* getRightChild() const;
};
#endif