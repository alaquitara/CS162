//
//  Ant.hpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Critter.hpp"

#ifndef Ant_hpp
#define Ant_hpp

#include <stdio.h>
class Grid;

class Ant : public Critter
{
    friend class Critter;
    
    public:
        Ant();
        Ant(Grid* grid, int x, int y);
    
        void breed();
        void move();
        bool starve();
    
        int getType();

};

#endif /* Ant_hpp */
