//
//  Doodlebug.hpp
//  lab5
//
//  Created by Alexander Laquitara on 2/3/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Critter.hpp"
#ifndef Doodlebug_hpp
#define Doodlebug_hpp

#include <stdio.h>
class Grid;

class Doodlebug : public Critter
{
    friend class Critter;
    
    private:
        int starved;
    public:
        Doodlebug();
        Doodlebug(Grid* grid, int x, int y);
    
        void breed();
        void move();
        bool starve();
    
        int getType();
    
};

#endif /* Doodlebug_hpp */
