//
//  List.hpp
//  Assignment2
//
//  Created by Alexander Laquitara on 1/22/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  List.hpp
 ** Author:    Alexander Laquitara
 ** Date:  1/22/2016
 ** Description: Header file for List Class
 ** Input:  User selected function from main.cpp
 ** Output:  prints a list of items to console
 *********************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
#include "Items.hpp"
#include <stdio.h>
#ifndef List_hpp
#define List_hpp


class List{
    private:
        int size, position;
        Items *shoppingCart;
    public:
        List();
        List(int);
        ~List();
        void doubleSize();
        void addItem(Items&);
        void deleteItem(int);
        void printList();
        bool checkDuplicate(Items&);
};




#endif /* List_hpp */
