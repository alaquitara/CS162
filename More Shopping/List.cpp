//
//  List.cpp
//  Assignment2
//
//  Created by Alexander Laquitara on 1/22/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  List.cpp
 ** Author:    Alexander Laquitara
 ** Date:  1/22/2016
 ** Description: Implementation file for List Class
 ** Input:  User selected function from main.cpp
 ** Output:  prints a list of items to console
 *********************************************************************/

#include "List.hpp"

//default constructor
List::List()
{
    size=4;
    position=0;
    shoppingCart = new Items[size];
}

//Constructor allowing for a custom size of the array
List::List(int s)
{
    size = s;
    position = 0;
    shoppingCart = new Items[size];
}

//destructor
List::~List()
{
    delete [] shoppingCart;
}

/*********************************************************************
 ** Function: addItem
 ** Description: Adds an Items object to the shoppingCart array.
 ** Parameters:  the address of an Items object
 ** Pre-Conditions: Array of Items exists
 ** Post-Conditions:  None
 *********************************************************************/
void List::addItem(Items &newItem)
{
    
    if (position == size)
    {
        doubleSize();
    }
    
    if (checkDuplicate(newItem))
    {
        shoppingCart[position]= newItem;
        position++;
    }
}

/*********************************************************************
 ** Function: checkDuplicate
 ** Description: Checks to see if there are multiples of the same item
    in the shopping cart.  If so it updates the quantity.
 ** Parameters:  the address of an Items object
 ** Pre-Conditions: Array of Items exists
 ** Post-Conditions:  None
 *********************************************************************/
bool List::checkDuplicate(Items &newItem)
{
    for (int i = 0; i<=position; i++)
    {
        if (shoppingCart[i] == newItem)
        {
            std::cout<<"Item already exists, cannot add.  Cart is being updated for quantity"<<std::endl;
            shoppingCart[i].setQuantity(newItem.getQuantity()+shoppingCart[i].getQuantity());
            return false;
        }
    }
    return true;
}

/*********************************************************************
 ** Function: doubleSize
 ** Description: Doubles the size of the Items array.
 ** Parameters:  None
 ** Pre-Conditions: An array of Items exists
 ** Post-Conditions:  A new shoppingCart is created and is twice the size
    of the last
 *********************************************************************/
void List::doubleSize()
{
    Items *tempList = new Items[size *2];
    for(int i = 0; i < size; i++)
    {
        tempList[i] = shoppingCart[i];
    }
    
    size = size *2;
    delete [] shoppingCart;
    shoppingCart = tempList;
}

/*********************************************************************
 ** Function: printList
 ** Description: Displays the contents of the shopping cart by line item.
                 Also gives a total of all items combined.
 ** Parameters:  None
 ** Pre-Conditions: Board object exists
 ** Post-Conditions:  None
 *********************************************************************/
void List::printList()
{
    double total = 0;
    
    std::cout<<"Number  Name   Unit  Quantity  Price Extended Price"<<'\n'<<std::endl;
    for (int i = 0; i <position; i++)
    {
        std::cout<<"#"<<i+1<< "     "<<shoppingCart[i].getName()<< "     "<<shoppingCart[i].getUnit()<< "     "<<
        shoppingCart[i].getQuantity()<< "     "<<shoppingCart[i].getPrice()<<"     "<<shoppingCart[i].extendedPrice()<< '\n'<<std::endl;
    }
    
    for (int j = 0; j<position; j++)
        {
            total+=shoppingCart[j].extendedPrice();
            
        }
    std::cout<<"The total cost of your shopping trip is: "<<total <<std::endl;
    std::cout<<'\n';
}

/*********************************************************************
 ** Function: deleteItem
 ** Description: Removes an Items object from shoppingCart
 ** Parameters:  int pos - the line number the user wishes to remove
 ** Pre-Conditions: Array of Items objects exists
 ** Post-Conditions:  size and position are decremented.
 *********************************************************************/
void List::deleteItem(int pos)
{
   
   for (int i = 0; i < size; i++)
    {
        if (i == pos)
        {
            Items *newArray = new Items[size-1];
            
            //http://www.cplusplus.com/reference/algorithm/copy/
            std::copy(shoppingCart, shoppingCart+i, newArray);
            
            std::copy(shoppingCart+i+1, shoppingCart+size, newArray+i);
            
            delete[] shoppingCart;
            shoppingCart = newArray;
            position--;
            size--;
        }
    }
}

    






