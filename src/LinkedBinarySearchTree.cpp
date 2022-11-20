#include "../include/LinkedList.h"

bool LinkedBinarySearch::isEmpty()
{
    bool returnValue = (root == nullptr) ? true : false;
    return returnValue;
}

void LinkedBinarySearch::addBST(int key1, int value1)
{
    if (root == nullptr)
    {
        Node *newNode = new Node(nullptr, nullptr, nullptr);
        newNode->data.key = key1;
        newNode->data.value = value1;
        root = newNode;
        return;
    }
    else
    {

        Node *navigator = root;
        while (true)
        {

            if (value1 > navigator->data.value)
            {

                if (navigator->rightChild == nullptr)
                {

                    Node *newNode = new Node(navigator, nullptr, nullptr);
                    newNode->data.value = value1;
                    newNode->data.key = key1;
                    navigator->rightChild = newNode;

                    break;
                }
                navigator = navigator->rightChild;
            }
            else if (value1 < navigator->data.value)
            {
                if (navigator->leftChild == nullptr)
                {
                    Node *newNode = new Node(navigator, nullptr, nullptr);
                    navigator->leftChild = newNode;
                    newNode->data.value = value1;
                    newNode->data.key = key1;

                    break;
                }
                navigator = navigator->leftChild;
            }
        }
    }
}


bool LinkedBinarySearch::searchBST(int target){
    searchBST(target,root);
    
    
}

bool LinkedBinarySearch::searchBST(int target,Node* temp)
{
    if (temp->data.value == target)
    {
        cout<<endl<<"The value exists in the binary search tree"<<endl;
        return true;
    }
    else
    {
        if (temp->leftChild != nullptr)
        {
            
            searchBST(target, temp->leftChild);

        }
        if (temp->rightChild != nullptr)
        {
            searchBST(target, temp->rightChild);
        }
    }

    return false;
}

void LinkedBinarySearch::traverse()
{
    traverse(root);
}

void LinkedBinarySearch::traverse(Node *temp)
{
    if (isEmpty())
    {
        cout << "Binary search tree not initialized";
        return;
    }

    cout << "--" << temp->data.value << "--";
    if (temp->leftChild != nullptr)
    {

        traverse(temp->leftChild);
    }
    if (temp->rightChild != nullptr)
    {

        traverse(temp->rightChild);
    }
    return;
}
Node * LinkedBinarySearch:: inOrderPredecessor(Node * temp){
     temp= temp->leftChild;
     while(temp->rightChild!=nullptr){
        temp=temp->rightChild;
     }
    return temp;
}

void LinkedBinarySearch:: deleteBST(int value , int target){
    deleteBST(root,target);
}

Node * LinkedBinarySearch:: deleteBST(Node *temp,int value){
    Node * iPre;
    
    if(temp->leftChild==nullptr && temp->rightChild==nullptr){
        delete(temp);
        return nullptr;
    }

    if(value<temp->data.value){
        temp->leftChild=deleteBST(temp->leftChild,value);
    }else if(value<temp->data.value){
        temp->rightChild=deleteBST(temp->rightChild,value);
    }
    else{
        iPre = inOrderPredecessor(temp);
        temp->data.value=iPre->data.value;
        
        temp->leftChild=deleteBST(temp->leftChild,iPre->data.value);
    }
    return temp;
}

