//
//  Stack.hpp
//  lab6
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Stack.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Header file for Stack class
 ** Input:  User selects which functions to run
 ** Output:  prints contents of stack or queue to console
 *********************************************************************/
#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
#include <stdio.h>

struct Node
{
    int data;
    Node* next;
    Node (int value1, Node *next1 = NULL)
    {
        data = value1;
        next = next1;
    }
};


class Stack
{
protected:
    struct Node
    {
        int data;
        Node* next;
        Node (int value1, Node *next1 = NULL)
        {
            data = value1;
            next = next1;
        }
    };
    Node *head;
public:
    Stack() {head = NULL;}
    ~Stack();
    void add(int n);
    int remove();
    void display() const;
};

#endif /* Stack_hpp */
