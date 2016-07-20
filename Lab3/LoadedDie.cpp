//
//  LoadedDie.cpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

/*********************************************************************
 ** Program Filename:  Die.cpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Implementation file for the LoadedDie class
 ** Input:  none
 ** Output: a Die object
 *********************************************************************/

#include "LoadedDie.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

//default constructor: 6 sides
LoadedDie::LoadedDie()
{
    setNumSides(6);
}

//Constructor for custom number of sides.
LoadedDie::LoadedDie(int numSidesIn) 
{
    setNumSides(numSidesIn);
}

/*********************************************************************
 ** Function:  rollLodedDie
 ** Description:  Simulates a loaded dice roll- a random number between 1
    and the number of sides on the die + 1.
 ** Parameters:  none
 ** Pre-Conditions:  There exits LoadedDie object with a vaid number of sides
 ** Post-Conditions:  returns the value of the roll
 *********************************************************************/

int LoadedDie::rollLoadedDie()
{
    
    int j =rand()% numSides +2;
    if (j>numSides) //makes sure the result of the roll cant exceede the number of sides.
    {
        j = numSides;
    }
    return j;
}
