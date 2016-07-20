//
//  Items.cpp
//  Assignment2
//
//  Created by Alexander Laquitara on 1/22/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Items.cpp
 ** Author:    Alexander Laquitara
 ** Date:  1/22/2016
 ** Description: Implementation file for Items Class.  Creates an Items and has
    all the necessary info for the Items created.
 ** Input:  None
 ** Output:  None
 *********************************************************************/

#include "Items.hpp"

//default constructor
Items::Items()
{
    name = " ";
    unit = " ";
    quantity = 0;
    price = 0.0;
}

//constructor allowing customization for name unit quantity and price
Items::Items(std::string thisName, std::string thisUnit, int thisQuantity, double thisPrice)
{
    name = thisName;
    unit = thisUnit;
    quantity = thisQuantity;
    price = thisPrice;
}

/*********************************************************************
 ** Function: getName
 ** Description: gets name
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
std::string Items::getName()
{
    return name;
}

/*********************************************************************
 ** Function: getUnit
 ** Description: gets unit
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
std::string Items::getUnit()
{
    return unit;
}

/*********************************************************************
 ** Function: getQuanity
 ** Description: gets quanity
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
int Items::getQuantity()
{
    return quantity;
}

/*********************************************************************
 ** Function: getPrice
 ** Description: gets price
 ** Parameters:  None
 ** Pre-Conditions: Items object exists
 ** Post-Conditions:  None
 *********************************************************************/
double Items::getPrice()
{
    return price;
}

/*********************************************************************
 ** Function: setName
 ** Description: sets name
 ** Parameters:  string
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Items::setName(std::string thisName)
{
    name = thisName;
}

/*********************************************************************
 ** Function: setUnit
 ** Description: sets unit
 ** Parameters:  string
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Items::setUnit(std::string thisUnit)
{
    unit = thisUnit;
}

/*********************************************************************
 ** Function: setQuantity
 ** Description: sets quantty
 ** Parameters:  int
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Items::setQuantity(int thisQuantity)
{
    quantity = thisQuantity;
}

/*********************************************************************
 ** Function: setPrice
 ** Description: sets price
 ** Parameters:  double
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
void Items::setPrice(double thisPrice)
{
    price = thisPrice;
}

/*********************************************************************
 ** Function: extendedPrice
 ** Description: multiplies price by quantity to get a total price
    for an item
 ** Parameters:  none
 ** Pre-Conditions: Item object exists
 ** Post-Conditions:  None
 *********************************************************************/
double Items::extendedPrice()
{
    return price * quantity;
}

//overloaded operator.  Used to check for duplicates in list.
bool operator == (Items a, Items b)
{
    return (a.getName() == b.getName()) && (a.getUnit() == b.getUnit());
}

