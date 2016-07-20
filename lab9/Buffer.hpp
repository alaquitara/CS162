//
//  Buffer.hpp
//  lab9
//
//  Created by Alexander Laquitara on 2/29/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Buffer.hpp
 ** Author:    Alexander Laquitara
 ** Date:  2/29/2016
 ** Description: Header file for class buffer
 ** Input:  none
 ** Output:  none
 *********************************************************************/
#ifndef Buffer_hpp
#define Buffer_hpp

#include <stdio.h>
#include <queue>
#include <time.h>
#include <cstdlib>
#include <iostream>

class Buffer{
    
public:
    Buffer();
    int random();
    void addNumber();
    void removeNumber();
    void runSim();
    int rollDie();
    void calcAvg();
    void printQueue();
    
private:
    std::queue<int> buffer;
    int counter;
    int average;
    int total;
    int size;
    
};

#endif /* Buffer_hpp */
