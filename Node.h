#include <iostream>
using namespace std; 

#pragma once
class Node
{
    friend class linkedList;

private:
   int Data;
   Node *next;

public:
    Node(/* args */);
    ~Node();
};

Node::Node(/* args */)
{
}

Node::~Node()
{
}


