//
//  Game.hpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Game.hpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Header file for the Game class.  Game "has a" loadedDie.
 ** Input:  none
 ** Output: a Game Object
*********************************************************************/
#include <iostream>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <stdio.h>
#include "LoadedDie.hpp"

#ifndef Game_hpp
#define Game_hpp

class Game : public LoadedDie
{
    private:
        int rounds, end, score1, score2, sides1, sides2;
        char select1, select2;
        LoadedDie player1;
        LoadedDie player2;
        
    public:
        Game();
        void gameSetup();
        void printscore();
        void war();
};
#endif /* Game_hpp */
