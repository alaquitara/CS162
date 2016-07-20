//
//  Die.cpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Die.cpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Implementation file for the Die class
 ** Input:  none
 ** Output: a Die object
 *********************************************************************/
#include "Die.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

//Default constructor, a standard 6 sided die
Die::Die()
{
    setNumSides(6);
}

//Constructor for custom number of sides.
Die::Die(int numSidesIn)
{
    setNumSides(numSidesIn);
}

void Die::setNumSides(int numSidesIn)
{
    if (numSidesIn > 0)
    {
        numSides = numSidesIn;
    }
    else
    {
        numSides = 6;
    }
}

/*********************************************************************
 ** Function:  rollDie
 ** Description:  Simulates a fair dice roll- a random number between 1
    and the number of sides on the die.
 ** Parameters:  none
 ** Pre-Conditions:  There exits Die object with a vaid number of sides
 ** Post-Conditions:  returns the value of the roll
 *********************************************************************/
int Die::rollDie()
{
    int j =rand()% numSides +1;
    return j;
}


