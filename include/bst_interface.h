#include<iostream>
#ifndef bst_interface_h
#define bst_interface_h 


class AbstractBinarySearchTree{
    public:
    virtual void addBST(int value, int target) =0; 
    virtual bool isEmpty() =0; 
    virtual void deleteBST(int value , int target)=0; 
    virtual bool searchBST(int target)= 0; 
    virtual void traverse()=0;
};

#endif // !bst_interface_h