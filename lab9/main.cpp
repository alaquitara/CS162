//
//  main.cpp
//  lab9
//
//  Created by Alexander Laquitara on 2/29/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/29/2016
 ** Description: Main file for lab 6. Contains the palindome stack funciton.
 ** Input:  Buffer Class, number of rounds, string to turn into palindrome.
 ** Output:  Runs the buffer simulation and turns a string into a palindrome.
 *********************************************************************/
#include <string>
#include <iostream>
#include <stack>
#include "Buffer.hpp"


std::string palindrome(std::string);

int main(int argc, const char * argv[]) {
    
    int choice;
    
    while(choice !=3)
    {
        std::cout<<"Enter 1 to demonstrate the buffer"<<std::endl;
        std::cout<<"Enter 2 to demonstrate the palindrome"<<std::endl;
        std::cout<<"Enter 3 to quit"<<std::endl;
        std::cin>>choice;
    
        switch (choice)
        {
            case 1:
            {
                Buffer queue;
                queue.runSim();
                break;
            }
            case 2:
            {
                std::string drome;
                std::cout<<"which word do you want to turn into a palindrome?"<<std::endl;
                std::cin>> drome;
                
                std::cout<<palindrome(drome)<<std::endl;
                break;
            }
            case 3:
            {
                std::cout<<"Closing Program"<<std::endl;
                break;
            }
            default:
                std::cout<<"Please select a number from the menu"<<std::endl;
            
        }
    }
    
    return 0;
}

/*********************************************************************
 ** Function: palindrome
 ** Description: Turns any string into a palindrome via a stack.
 ** Parameters:  string str
 ** Pre-Conditions: contents of str is set from main.
 ** Post-Conditions:  string str is made into a palindrome.
 *********************************************************************/
std::string palindrome(std::string str)
{
    std::string reverse;
    
    //http://www.cplusplus.com/forum/beginner/160537/
    std::stack<char> stk;
    
    for (int i = 0; i < str.length(); i++)
    {
        stk.push(str.at(i));
    }
    
    while(!stk.empty())
    {
        reverse.push_back(stk.top());
        stk.pop();
    }
    
    return str+reverse;
    
}