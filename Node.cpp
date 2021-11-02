#include "Node.h"

#include<iostream>
#include<string>

int Node::getData() const{
    return data;
}
Node* Node::getLeftChild() const{
    return left;
}
Node* Node::getRightChild() const{
    return right;
}