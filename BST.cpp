#include "BST.h"

#include<iostream>
#include<string>

BST::BST(){}
BST::~BST(){}

NodeInterface* BST::getRootNode(){

}

bool BST::add(int data){
    if(root == NULL){

    }
}

bool add(Node* currentNode, int data){
    if (currentNode == NULL){
        Node* newNode = new Node(data);
        currentNode = newNode;
        return 1;
    }
    else if (data < currentNode->getData()){
        add(currentNode->getLeftChild(), data);
    }
    else if (data > currentNode->getData()){
        add(currentNode->getRightChild(), data);
    }
    else{
        return 0;
    }
}

bool remove(int data){

}

void clear(){

}