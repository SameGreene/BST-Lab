#include "Node.h"

#include<iostream>
#include<string>

int Node::getData() const{
    return data;
}
NodeInterface* Node::getLeftChild() const{
    return left;
}
NodeInterface* Node::getRightChild() const{
    return right;
}