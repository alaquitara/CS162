//
//  Queue.cpp
//  lab6
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Queue.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Implementation file for class Queue
 ** Input:  Struct Node with int data values
 ** Output:  prints contents of queue
 *********************************************************************/
#include "Queue.hpp"


/*********************************************************************
 ** Function: add
 ** Description: Adds an int to the back of the queue.
 ** Parameters:  int n
 ** Pre-Conditions: queue object and node struct
 ** Post-Conditions:  int n becomes the last bit of data in the queue.
 *********************************************************************/
void Queue::add(int n)
{
    //if empty
    if (head == NULL || head->data >= n)
    {
        head = new Node(n, head);
    }
    
    //first in
    else
    {
        Node* nodePtr=head;
        while(nodePtr->next != NULL)
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = new Node(n,NULL,nodePtr);
        
    }
    
}
/*********************************************************************
 ** Function: remove
 ** Description: removes an int from the queue front.
 ** Parameters:  none
 ** Pre-Conditions: queue class and struct node exists
 ** Post-Conditions:  returns the data at the deleted node and deletes the pointer
 *********************************************************************/
int Queue::remove()
{
    //first out
    int removed;
    Node *temp;
    
    if(head == NULL)
    {
        return 0;
    }
    else if(head->next == NULL)
    {
        removed = head->data;
        delete head;
    }
    else;
    {
        temp = head->next;
        removed = head->data;
        delete head;
        
        head= temp;
        head->prev = NULL;
    }
    return removed;
}

/*********************************************************************
 ** Function: Display
 ** Description: Prints the contents of the queue to the console
 ** Parameters:  none
 ** Pre-Conditions: queue object and node struct
 ** Post-Conditions:  none
 *********************************************************************/
void Queue::display() const
{
    Node *nodePtr = head;
    while(nodePtr)
    {
        std::cout<<nodePtr->data<< " ";
        nodePtr= nodePtr->next;
    }
}

/*********************************************************************
 ** Function: deconstructor
 ** Description: frees up memory used by queue
 ** Parameters:  none
 ** Pre-Conditions: queue object and node struct
 ** Post-Conditions:  memory is freed.
 *********************************************************************/
Queue::~Queue()
{
    Node *nodePtr = head;
    while(nodePtr != NULL)
    {
        Node *garbage = nodePtr;
        nodePtr= nodePtr->next;
        delete garbage;
    }
}