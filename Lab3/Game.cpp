//
//  Game.cpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Game.cpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Implementation file for the Game class
 ** Input:  none
 ** Output: a Game Object
 *********************************************************************/

#include "Game.hpp"

/*
//Default constructor which creates 2 die with N number of sides
//as determined by user.
*/
Game::Game()
{
    std::cout<<"How many sides are on player1's die? " <<std::endl;
    std::cin>>sides1;
    std::cout<<"How many sides are on player2's die? " <<std::endl;
    std::cin>>sides2;
    
    player1.setNumSides(sides1);
    player2.setNumSides(sides2);
}

/*********************************************************************
 ** Function:  gameSetup
 ** Description:  sets the conditions for war to run.  User determines if
    either die is loaded,
 ** Parameters:  none
 ** Pre-Conditions:  There exits a Game object
 ** Post-Conditions:  none
 *********************************************************************/
void Game::gameSetup()
{
    std::cout<<"Player 1 is using a die with "<<sides1<<" sides"<<std::endl;
    std::cout<<"Player 2 is using a die with "<<sides2<<" sides"<<std::endl;
    std::cout<<"How many rounds do you wish to play?"<<std::endl;
    std::cin>>end;
    
    //check to see if player 1 is using a loaded die.
    std::cout<<"Does player 1 have a loaded die? Y/N";
   
    std::cin>>select1;
    
    
    if((select1 == 'y') || (select1 == 'Y'))
    {
        std::cout<<"Player 1 is using a loaded die... what a cheater!"<<std::endl;
    }
    else{
        std::cout<<"Player 1 is using a normal die... a true player of honor!"<<std::endl;
    }

    //check to see if player 2 is using a loaded die.
    std::cout<<"Does player 2 have a loaded die? Y/N";
    
    std::cin>>select2;

    if((select2 == 'y') || (select2 == 'Y'))
    {
        std::cout<<"Player 2 is using a loaded die... what a cheater!"<<std::endl;
    }
    else{
        std::cout<<"Player 2 is using a normal die... a true player of honor!"<<std::endl;
    }
}

/*********************************************************************
 ** Function:  printScore
 ** Description:  Displays the score of both players by round.
    Also determines who is the winner.
 ** Parameters:  none
 ** Pre-Conditions:  There exits a Game object
 ** Post-Conditions:  none
 *********************************************************************/
void Game::printscore()
{
    if (rounds <= end)
    {
        std::cout<<"Player1 has "<<score1<<" points"<<std::endl;
        std::cout<<"Player2 has "<<score2<<" points"<<std::endl;
    }
    if (rounds >= end)
    {
        if(score1 > score2)
        {
            std::cout<<"Player1 wins!"<<std::endl;
            std::cout<<'\n';
            std::cout<<"The final score is "<<score1<< " to "<<score2<<std::endl;
        }
        else if(score1 < score2)
        {
            std::cout<<"Player2 wins!"<<std::endl;
            std::cout<<'\n';
            std::cout<<"The final score is "<<score1<< " to "<<score2<<std::endl;
        }
        else{
            std::cout<<" Player1 and Player2 tied"<<std::endl;
            std::cout<<'\n';
            std::cout<<"The final score is "<<score1<< " to "<<score2<<std::endl;
        }
    }
}

/*********************************************************************
 ** Function:  printScore
 ** Description:  Runs war simulation. Compares the result of each player's
    roll and assigns a point to the higher roll.
 ** Parameters:  none
 ** Pre-Conditions:  There exits a Game object
 ** Post-Conditions:  none
 *********************************************************************/
void Game::war()
{
    
    
    int roll1, roll2;
    score1 = 0, score2 = 0, rounds = 0;
    while (rounds< end)
    {
        std::cout<<'\n';
        std::cout<<"Round " <<rounds+1<< " begin!"<<std::endl;
        
        if((select1 == 'y') || (select1 == 'Y'))
        {
            roll1 = player1.rollLoadedDie();
        }
        else{
            roll1 = player1.rollDie();
        }
    
        if((select2 == 'y') || (select2 == 'Y'))
        {
            roll2 = player2.rollLoadedDie();
        }
        else{
            roll2 = player2.rollDie();
        }
    
        std::cout<<"Player 1 rolled a " << roll1<<std::endl;
        std::cout<< "Player 2 rolled a " <<roll2<<std::endl;
        
        //if player one rolls higher they get a point
        if (roll1>roll2){
            score1++;
        }
    
        //if player two rolls higher they get a point
        else if(roll2>roll1){
            score2++;
        }
        
        //a tie
        else
        {
            std::cout<<"Player 1 and Player 2 tied"<<std::endl;
        }
    
        rounds++;
        sleep(2);
        printscore();
        sleep(3);
        std::cout<<'\n';
    }
}


