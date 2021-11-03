#include "BST.h"

#include<iostream>
#include<string>

BST::BST(){
    root = NULL;
}
BST::~BST(){}

Node* BST::getRootNode() const{
    return root;
}

bool BST::add(int data){
    return addHelper(root, data);
}

bool BST::addHelper(Node*& currentNode, int data){
    if(currentNode == NULL){
        currentNode = new Node(data);
        currentNode->left = NULL;
        currentNode->right = NULL;
        currentNode->value = data;
        return 1;
    }
    else if(data == currentNode->getData()){
        return 0;
    }
    //get__Child() or no?
    else if(data < currentNode->getData()){
        return addHelper(currentNode->left, data);
    }
    else if(data > currentNode->getData()){
        return addHelper(currentNode->right, data);
    }
    else{
        return 0;
    }
}

bool BST::remove(int data){
    return removeHelper(root, data);
}

bool BST::removeHelper(Node*& local_root, int data){
    if(local_root == NULL){
        return 0;
    }
    else{
        if(data < local_root->value){
            return removeHelper(local_root->left, data);
        }
        else if(data > local_root->value){
            return removeHelper(local_root->right, data);
        }
        else{
            Node* old_root = local_root;

            if(local_root->left == NULL){
                local_root = local_root->right;
                delete old_root;
            }
            else if(local_root->right == NULL){
                local_root = local_root->left;
                delete old_root;
            }
            else{
                replace(old_root, local_root->left);
            }

            return 1;
        }
    }
}

void BST::replace(Node*& old_root, Node*& local_root){
    if(local_root->right != NULL){
        replace(old_root, local_root->right);
    }
    else{
        old_root->value = local_root->value;
        removeHelper(old_root->left, local_root->value);
    }
}

void BST::clear(){
    clearHelper(this->root);
    this->root = NULL;
}

void BST::clearHelper(Node* currentNode){
    if(currentNode != NULL){
        clearHelper(currentNode->left);
        clearHelper(currentNode->right);
        delete currentNode;
    }
}