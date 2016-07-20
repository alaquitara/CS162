//
//  Buffer.cpp
//  lab9
//
//  Created by Alexander Laquitara on 2/29/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Buffer.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/29/2016
 ** Description: Implementation file for class buffer
 ** Input:  none
 ** Output:  none
 *********************************************************************/
#include "Buffer.hpp"

//default constructor
Buffer::Buffer()
{
    total = 0;
    counter = 0;
    average = 0;
    size = 0;
}

/*********************************************************************
 ** Function: random
 ** Description: produces a random number between 1 - 100
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  random number is returned
 *********************************************************************/
int Buffer::random()
{
    srand(static_cast <int>(time(NULL)));
    return rand() % 100 +1;
}

/*********************************************************************
 ** Function: addNumber
 ** Description: Adds a number to the back of a queue.
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  a random number is (sometimes) added to the queue.
 *********************************************************************/
void Buffer::addNumber()
{
    int percentNum;
    std::cout<<"What percent chance is there that the number will be added?"<< '\n' <<"enter an integer"<<std::endl;
    std::cin>> percentNum;
    
    int addValue = rollDie();
    int chance = random();
    
    if (chance <= percentNum)
    {
        buffer.push(addValue);
        std::cout<<addValue<<" added to queue"<<std::endl;
        total += addValue;
        size++;
    }
    else
    {
        std::cout<< addValue<< " not added to queue"<<std::endl;
    }
}

/*********************************************************************
 ** Function: removeNumber
 ** Description: Removes the number at the start of the queue.
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  a random number is (sometimes) removed from the queue.
 *********************************************************************/
void Buffer::removeNumber()
{
    int percentNum;
    std::cout<<"What percent chance is there that the number will be removed?"<< '\n' <<"enter an integer"<<std::endl;
    std::cin>> percentNum;
    
    if (buffer.empty())
    {
        std::cout<< "nothing in queue"<<std::endl;
    }
    
    else
    {
        int chance =random();
        if(chance <= percentNum)
        {
            std::cout<<"Removed "<< buffer.front()<<" from queue"<<std::endl;
            total -=buffer.front();
            size--;
            buffer.pop();
        }
        else
        {
            std::cout<<"nothing removed from queue"<<std::endl;
        }
    }
}

/*********************************************************************
 ** Function: rollDie
 ** Description: produces a random number between 1 and 6
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  a random value is returned between 1 and 6
 *********************************************************************/
int Buffer::rollDie()
{
    int numSides = 6;
    int j =rand()% numSides +1;
    return j;
}

/*********************************************************************
 ** Function: calcAvg
 ** Description: Calculates the average of the queue contents
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Buffer::calcAvg()
{
    std::cout<<"the average is " << total / (double)size<<std::endl;
    std::cout<<'\n';
}

/*********************************************************************
 ** Function: printQueue
 ** Description: Displays the contents of the queue contents
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Buffer::printQueue()
{
    std::cout<<"Printing the contents of the queue:"<<std::endl;
    //http://stackoverflow.com/questions/12631514/how-can-i-print-out-the-contents-of-stdstack-and-return-its-size
    for(std::queue<int> dump = buffer; !dump.empty(); dump.pop())
    {
        std::cout<<dump.front()<<" ";
    }
    std::cout<<std::endl;
}

/*********************************************************************
 ** Function: runSim
 ** Description: Main driver for the buffer class.  Loops though buffer functions
                 as many times as user wishes.
 ** Parameters:  none
 ** Pre-Conditions: none
 ** Post-Conditions:  none
 *********************************************************************/
void Buffer::runSim()
{
    int rounds;
    std::cout<<"How many times do you wish to run the simulation?"<<'\n' <<"enter an integer"<<std::endl;
    std::cin>>rounds;
    while(counter < rounds)
    {
        addNumber();
        removeNumber();
        counter++;
        calcAvg();
        printQueue();
    }
}
