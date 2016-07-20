//
//  Critter.cpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Critter.hpp"
Critter::Critter()
{
    grid= 0;
    life = 0;
    x=0;
    y=0;
    
    checkMove = false;
}

Critter::Critter(Grid *grid, int x, int y)
{
    life = 0;
    this->grid = grid;
    this->x = x;
    this->y = y;
    checkMove = false;
    
}