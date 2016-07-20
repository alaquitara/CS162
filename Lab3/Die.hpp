//
//  Die.hpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Die.hpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Header file for the Die class
 ** Input:  none
 ** Output: a Die object
 *********************************************************************/
#ifndef Die_hpp
#define Die_hpp
#include <ctime>
#include <stdio.h>

class Die
{
protected:
    int numSides;
    
public:
    Die();
    Die(int);
    void setNumSides(int);
    int rollDie();
};
#endif /* Die_hpp */
