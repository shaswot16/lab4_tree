#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
using namespace std;
#include "bst_interface.h"

class Data{
    public:
    int key;
    int value;

    Data(int key=NULL,int value=NULL){
        this->key=key;
        this->value=value;
    }
};


class Node{
    public:
    Node* parent;
    Node* rightChild;
    Node* leftChild;

   
    Data data;
    Node( Node* parent,
    Node* rightChild,
    Node* leftChild){
        this->parent= parent;
        this->rightChild = rightChild;
        this->leftChild = leftChild ;
    };
};

class LinkedBinarySearch: public AbstractBinarySearchTree{

    
    Node* root=nullptr;

    public:
     void addBST(int value, int target) ; 
     bool isEmpty() ; 
     void deleteBST(int value , int target); 
     Node * deleteBST(Node *temp,int value);
     bool searchBST(int target); 
     bool searchBST(int target,Node* temp);
     void traverse();
     void traverse(Node * temp);
     Node * inOrderPredecessor(Node * temp);
     
    

};

#endif

