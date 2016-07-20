//
//  main.cpp
//  lab6
//
//  Created by Alexander Laquitara on 2/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/8/2016
 ** Description: Menu for lab6
 ** Input:  User selects which functions to run
 ** Output:  prints contents of stack or queue to console
 *********************************************************************/

#include <iostream>
#include "Stack.hpp"
#include "Queue.hpp"


int main(int argc, const char * argv[]) {
    
    int soq = 0;
    
    std::cout<<"do you want to demonstate the stack or queue?  Enter 1 for stack or 2 for queue"<<std::endl;
    std::cin>>soq;
    
    if(soq ==1)
    {
        Stack stack;
        int choice;
    
        while(choice !=4)
            {
                std::cout<<"****STACK MENU****"<<std::endl;
                std::cout<<"Enter 1 to add to stack"<<std::endl;
                std::cout<<"Enter 2 to remove from stack"<<std::endl;
                std::cout<<"Enter 3  to display stack"<<std::endl;
                std::cout<<"Enter 4 to quit"<<std::endl;
                std::cin>>choice;
    
                switch(choice)
                {
                    case 1:
                    {
                        int inNum;
                        std::cout<<"enter a number"<<std::endl;
                        std::cin>>inNum;
                        stack.add(inNum);
                        
                        break;
                    }
                    case 2:{
                        std::cout<<"removed "<<stack.remove();
                         std::cout<<'\n';
                        
                        break;
                    }
                    case 3:
                    {
                        stack.display();
                        std::cout<<'\n';
                        break;
                    }
                    case 4:
                    {
                        std::cout<<"closing the program"<<std::endl;
                        break;
                    }
                    default:
                        std::cout<<"please select from the menu"<<std::endl;
                }
            }
        }
    
    //Start the queue
    else if(soq==2)
    {
    
        Queue queue;
        int choice1;
        
        while(choice1 !=4)
        {
            std::cout<<"****Queue MENU****"<<std::endl;
            std::cout<<"Enter 1 to add to queue"<<std::endl;
            std::cout<<"Enter 2 to remove from queue"<<std::endl;
            std::cout<<"Enter 3  to  display queue"<<std::endl;
            std::cout<<"Enter 4 to quit"<<std::endl;
            std::cin>>choice1;
            
            switch(choice1)
            {
                case 1:
                {
                    int inNum;
                    std::cout<<"enter a number"<<std::endl;
                    std::cin>>inNum;
                    queue.add(inNum);
                    
                    break;
                }
                case 2:{
                    std::cout<<"removed "<<queue.remove();
                    std::cout<<'\n';
                    
                    break;
                }
                case 3:
                {
                    queue.display();
                    std::cout<<'\n';
                    break;
                }
                case 4:
                {
                    std::cout<<"closing the program"<<std::endl;
                    break;
                }
                default:
                    std::cout<<"please select from the menu"<<std::endl;
            }
        }
    }
    
    return 0;
}
