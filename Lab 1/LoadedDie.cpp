//
//  LoadedDie.cpp
//  Lab 1
//
//  Created by Alexander Laquitara on 9/24/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  LoadedDie.cpp
 ** Author:   Alexander Laquitara
 ** Date:  10/1/15
 ** Description:  LoadedDie class implementation file
 ** Input:  the number of sides on the die
 ** Output: resuts of one dice roll
 *********************************************************************/

#include "LoadedDie.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


LoadedDie::LoadedDie()  //defaults the die to 6 sides
{
    setNumSides(6);
}

LoadedDie::LoadedDie(int numSidesIn) //allows for the user to manipulate the number of sides.
{
    setNumSides(numSidesIn);
}


void LoadedDie::setNumSides(int numSidesIn)//Checks to ensure the die has at least 1 side
{
    if (numSidesIn > 0)
    {
        numSides = numSidesIn;
    }
    else
    {
        numSides = 0;
        std::cout << "Invalid number of sides... exiting" << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

/********************************************************************* 
 ** Function:  rollDie
 ** Description:  Simulates a loaded dice roll
 ** Parameters:  none
 ** Pre-Conditions:  A vaid number of sides
 ** Post-Conditions:  the number of sides can't be greater than result of the roll
 *********************************************************************/

int LoadedDie::rollDie()
{
    
    int j =rand()% numSides +2;
    if (j>numSides) //makes sure the result of the roll cant exceede the number of sides.
    {
        j = numSides;
    }
    return j;
}
