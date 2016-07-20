//
//  Stack.cpp
//  lab6
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Stack.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Implementation file for Stack class
 ** Input:  Nodes are added to the stack
 ** Output:  prints contents of stack to console
 *********************************************************************/
#include "Stack.hpp"

/*********************************************************************
 ** Function: add
 ** Description: Adds an int to the top of thestack.
 ** Parameters:  int a
 ** Pre-Conditions: stack object and node struct
 ** Post-Conditions:  int a becomes the head data
 *********************************************************************/
void Stack::add(int a)
{
    //stack is empty
    if (head == NULL)
    {
        head = new Node(a);
    }
    //the new node becomes the top of stack.
    else
    {
        //page 1029
        head = new Node(a, head);
    }
}

/*********************************************************************
 ** Function: remove
 ** Description: removes an int from the stack.
 ** Parameters:  none
 ** Pre-Conditions: none, will thorw an error if the stack is empty
 ** Post-Conditions:  returns the data at the deleted node and deletes the pointer
 *********************************************************************/
int Stack::remove()
{
    Node *nodePtr;
    int removed;
    if(!head)
    {
        std::cout<<"ERROR: stack is empty"<<std::endl;
        return 0;
    }
    
    else
    {
        nodePtr = head;
        removed = head->data;
        head = head->next;
        delete nodePtr;
        return removed;
    }
    
}

/*********************************************************************
 ** Function: Display
 ** Description: Prints the contents of the stack to the console
 ** Parameters:  none
 ** Pre-Conditions: stack object and node struct
 ** Post-Conditions:  none
 *********************************************************************/
void Stack::display() const
{
    Node *nodePtr = head;
    while(nodePtr)
    {
        std::cout<<nodePtr->data<<"   ";
        nodePtr = nodePtr->next;
    }
}

/*********************************************************************
 ** Function: deconstructor
 ** Description: frees up memory used by stack
 ** Parameters:  none
 ** Pre-Conditions: stack object and node struct
 ** Post-Conditions:  memory is freed.
 *********************************************************************/
Stack::~Stack()
{
    Node *nodePtr = head;
    while(nodePtr != NULL)
    {
        Node *garbage = nodePtr;
        nodePtr= nodePtr->next;
        delete garbage;
    }
}
