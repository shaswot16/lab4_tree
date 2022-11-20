#include <iostream>
#include "bst_interface.h"
#include "LinkedList.h"

int main(){
 AbstractBinarySearchTree * ptr;
 LinkedBinarySearch L_l ;
 ptr =&L_l;

 cout<<endl<<"----><-----"<<endl;
 if(ptr->isEmpty()){
    cout<<"Binary Search tree un-initialized"<<endl;
 }

 cout<<endl<<"----><-----"<<endl;

 ptr->addBST(1,5);
 ptr->addBST(2,10);
 ptr->addBST(3,3);
 ptr->addBST(4,90);
 ptr->addBST(5,7);
 ptr->addBST(6,6);
 ptr->addBST(7,8);
 ptr->traverse();
 cout<<endl<<"----><-----"<<endl;

 ptr->searchBST(10);

 ptr->deleteBST(1,5);
 ptr->traverse();
 




 
}