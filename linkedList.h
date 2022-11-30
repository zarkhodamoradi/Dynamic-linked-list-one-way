#include <iostream>
using namespace std;
#pragma once
#include "Node.h"

class linkedList
{
private:
    Node *first;
    Node *last;

public:
    linkedList();
    ~linkedList();

    void addnode();
    void showLinkedList();
    Node *searchNode(int data_);
    Node*searchNode();

    void deleteNode();
};

linkedList::linkedList(/* args */)
{
    first = NULL;
}

linkedList::~linkedList()
{
}

void linkedList::addnode()
{
    int data;
    if (first == NULL)
    {
        cout << "Enter the data : ";
        cin >> data;
        Node *temp = new Node();
        temp->next = NULL;

        temp->Data = data;
        first = temp;
        last = first;
    }
    else
    {
        cout << "Enter the data : ";
        cin >> data;
        Node *temp = new Node();
        temp->Data = data;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void linkedList::showLinkedList()
{
    Node *temp = new Node();
    temp = first;
    cout << "linked list : ";
    while (temp != NULL)
    {

        cout << temp->Data << " -> ";

        temp = temp->next;
    }
    cout << "Null";
    cout << endl;
}

Node *linkedList::searchNode(int data_)
{
    


    Node *temp = new Node();
    temp = first;
    int counter = 1;
    while (temp != NULL)
    {
        if (temp->Data == data_)
        {
            return temp;
            
        }
        else
            temp = temp->next;
        counter++;
    }
    if (temp == NULL)
    {
        cout << "Node is not found" << endl;
    };

    return temp;
}
Node *linkedList::searchNode()
{
    int data_;
    cout << "which node you want to found ?  : ";
    cin >> data_;
    cout << endl;
    Node *temp = new Node();
    temp = first;
    int counter = 1;
    while (temp != NULL)
    {
        if (temp->Data == data_)
        {
            cout << "Node is found in Node " << counter << endl;
            break;
        }
        else
            temp = temp->next;
        counter++;
    }
    if (temp == NULL)
    {
        cout << "Node is not found" << endl;
    };

    return temp;
}
 void linkedList::deleteNode(){
    int data;
    cout<<"Which node you want to delete ? ";
    cin>>data;
    Node *temp=new Node();
    temp=searchNode(data);
    Node *tempA=new Node();
    Node *tempPrev=new Node();

tempA=first;
while (tempA!=NULL)
{
   if (tempA->next == temp)
   {
    tempPrev=tempA;
break;
   }
   tempA=tempA->next;
}
if (temp==first)
{
   first =temp->next;
   temp->next=NULL;

}
if (temp==last)
{
    last=tempPrev;
    last->next=NULL;

}
else
{
   tempPrev->next=temp->next;
   temp->next=NULL;

}



    
 }