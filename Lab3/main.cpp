//
//  main.cpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
#include "LoadedDie.hpp"
#include "Game.hpp"

/*********************************************************************
 ** Program Filename:  main.cpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  main file for execution of class game.  Takes a object
    of game and runs a war simulation.  User is able to determine the 
    number of sides per dice rolled, the number of rounds, and if the dice
    are loaded.
 ** Input:  none
 ** Output: results of the war simulation
 *********************************************************************/

int main(int argc, const char * argv[]) {
    
    srand( static_cast<unsigned int>( time(NULL)));
    
    Game game;
    game.gameSetup();
    game.war();
    
    return 0;
}
