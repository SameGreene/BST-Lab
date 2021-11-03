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
    bool addHelper(Node*& currentNode, int data);
    bool remove(int data);
    bool removeHelper(Node*& local_root, int data);
    void replace(Node*& old_root, Node*& local_root);
    void clear();
    void clearHelper(Node* currentNode);
};
#endif