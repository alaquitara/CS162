//
//  Grid.cpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
#include "Critter.hpp"
#include "Grid.hpp"

Grid::Grid()
{
    for (int i = 0; i < 20; i++)
    {
        for(int j = 0; j <20; j++)
        {
            onGrid[i][j] = 0;
        }
    }
}

//returns Critters by cell
Critter *Grid::getGrid(int x, int y)
{
    if ((x>=0) && (x <20) && (y>= 0) && (y < 20))
    {
        return onGrid[x][y];
    }
    return NULL;
}

void Grid::setGrid (int x, int y, Critter *aCritter)
{
    if ((x>=0) && (x <20) && (y>= 0) && (y < 20))
    {
        onGrid[x][y] = aCritter;
    }
}

void Grid::printGrid()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0 ; j <20; j++)
        {
            //not occupied cell
            if(onGrid[i][j] == 0)
            {
                std::cout<<" ";
            }
            
            else if(onGrid[i][j]->getType() == 1)
            {
                std::cout<<"O";
            }
            else
            std::cout<<"X";
        }
    }
}

void Grid:: runSim()
{
    
    
}

