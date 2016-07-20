//
//  Queue.hpp
//  lab6
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Queue.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Header file for class Queue
 ** Input:  Struct Node with int data values
 ** Output:  prints contents  of queue
 *********************************************************************/
#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>
/*********************************************************************
 ** Program Filename:  Queue.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Header file for class Queue
 ** Input:  Struct Node with int data values
 ** Output:  prints contents of queue
 *********************************************************************/

class Queue
{

protected:
    struct Node
    {
        int data;
        struct Node* next;
        struct Node* prev;
        Node (int value1, Node *next1 = NULL, Node *prev1 = NULL)
        {
            data = value1;
            next = next1;
            prev = prev1;
        }
    };
    struct Node *head;

public:
    Queue() {head = NULL;}
    ~Queue();
    void add(int n);
    int remove();
    void display() const;
};
#endif /* Queue_hpp */
