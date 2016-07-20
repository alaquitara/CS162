//
//  main.cpp
//  Lab 1
//
//  Created by Alexander Laquitara on 9/24/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************  
 ** Program Filename:  Lab 1
 ** Author:   Alexander Laquitara
 ** Date:  10/1/15
 ** Description:  Applies die and loadedDie classes to simulate dice rolls
 ** Input:  the number of dice rolled
 ** Output: resuts of the dice roll
 *********************************************************************/
#include "Die.h"
#include "LoadedDie.h"
#include <iostream>

int main(int argc, const char * argv[]) {
    
    srand( static_cast<unsigned int>( time(NULL))); //had to static cast to prevent loss of precision imlicity, referenced stackoverflow.com
    
    int numRoll;
    std::cout<<" How many dice do you wish to roll?" << std::endl;
    std::cin>> numRoll;
    
    Die regDie;
    LoadedDie loadDie;
    
    std::cout<<"normal die"<<std::endl;
    for (int i = 0; i <numRoll;i++)
    {
        std::cout<< regDie.rollDie()<<std::endl;
    }
    std::cout<<"loaded die:"<<std::endl;
    for(int i =0; i<numRoll; i++)
    {
        std::cout<<loadDie.rollDie()<<std::endl;
    }
    
    return 0;
}


