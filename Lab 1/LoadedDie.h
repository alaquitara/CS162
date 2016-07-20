//
//  LoadedDie.h
//  Lab 1
//
//  Created by Alexander Laquitara on 9/24/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  LoadedDie.h
 ** Author:   Alexander Laquitara
 ** Date:  10/1/15
 ** Description:  Header file for the LoadedDie class
 ** Input:  Number of sides on a loaded die
 ** Output: resuts of the dice roll
 *********************************************************************/

#ifndef __Lab_1__LoadedDie__
#define __Lab_1__LoadedDie__



#include <stdio.h>
class LoadedDie
{
private:
    int numSides;
    
public:
    LoadedDie();
    LoadedDie(int);
    void setNumSides(int);
    int rollDie();
};


#endif /* defined(__Lab_1__LoadedDie__) */
