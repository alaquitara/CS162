//
//  Grid.hpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "Critter.hpp"
#ifndef Grid_hpp
#define Grid_hpp
#include <iostream>
#include <ctime>
#include <stdio.h>

class Critter;

class Grid
{
    friend class Critter;
    friend class Ant;
    friend class Doodlebug;
    
    private:
        int* onGrid[20][20];
    
    public:
        Grid();
        void runSim();
        void printGrid();
    
        int* getGrid(int x, int y);
        void setGrid (int x, int y, int *aCritter);
};



#endif /* Grid_hpp */
