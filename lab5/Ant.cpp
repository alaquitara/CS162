//
//  Ant.cpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Ant.hpp"

void Ant::move()
{
    int move =rand() % 4;
    
    if(move == 0)
        if(grid->getGrid(x+1,y == 0)
           grid->setGird(x+1, y, grid->getGrid(x,y));
           grid->setGrid(x,y, NULL);
}

void Ant::breed()
{
    life++;
    
    if (life == 3)
    {
        
    }
}


int Ant::getType()
{
    return 1;
}