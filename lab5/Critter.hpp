//
//  Critter.hpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//


#ifndef Critter_hpp
#define Critter_hpp
#include "Ant.hpp"
#include "Doodlebug.hpp"
#include <stdio.h>
#include <stdlib.h>

//http://stackoverflow.com/questions/4964482/how-to-create-two-classes-in-c-which-use-each-other-as-data 
class Grid;

class Critter{
    
    
    friend class Grid;
    
    public:
        Critter();
        Critter(Grid *grid, int x, int y);
    
        virtual void breed() = 0;
        virtual void move() = 0;
        virtual bool starve() = 0;
        virtual int getType() = 0;
        virtual void setGrid (int x, int y);
        virtual int getGrid() = 0;
    
    protected:
        int x;
        int y;
    
        bool checkMove;
    
        int life;
    
        Grid *grid;
};

#endif /* Critter_hpp */
