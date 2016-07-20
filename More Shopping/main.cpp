//
//  main.cpp
//  Assignment2
//
//  Created by Alexander Laquitara on 1/22/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  1/22/2016
 ** Description: Main file for List class.  Provides a user with a menu
    in which to interact with the class.
 ** Input:  List object
 ** Output:  Contents of a customized shoppingCart
 *********************************************************************/
#include "List.hpp"
#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    std::string newName, newUnit;
    double newPrice;
    int newQuantity, select, posSelect;
    
    List list;
    
    while(select !=4)
    {
        std::cout<< "Shopping Cart Menu"<<std::endl;
        std::cout<< "Please select from the following options"<<std::endl;
        std::cout<<"Select 1 to add an item"<<std::endl;
        std::cout<<"Select 2 to remove an item"<<std::endl;
        std::cout<<"Select 3 to display the contents of your shopping cart"<<std::endl;
        std::cout<<"Select 4 to close your shopping cart"<<std::endl;
        std::cin>> select;
        
        switch (select)
        {
            case 1:
            {
                std::cout<<"Add an Item to your cart"<<std::endl;
                std::cout<<"what is the name of the item?"<<std::endl;
                std::cin.ignore();
                std::getline(std::cin, newName);
                std::cout<<"what is the unit? lbs, oz, gal, ect..."<<std::endl;
                std::cin>> newUnit;
                std::cout<<"How much does it cost?"<<std::endl;
                std::cin>>newPrice;
                std::cout<<"How many of them are there?"<<std::endl;
                std::cin>>newQuantity;
                
                Items newItem(newName, newUnit, newQuantity, newPrice);
                list.addItem(newItem);
               
                break;
            }
            case 2:
            {
                std::cout<<"Delete an Item from your cart:"<<std::endl;
                std::cout<<"Which Item number do you want to remove?"<<std::endl;
                std::cin>>posSelect;
                
                list.deleteItem(posSelect-1);
                
                break;
            }
            case 3:
            {
                std::cout<<"Printing the contents of your shopping cart"<<std::endl;
                sleep(1);
                std::cout<<'\n';
                
                list.printList();
                
                break;
            }
            case 4:
                std::cout<<"Closing your shopping cart"<<std::endl;
                
                break;
                
            default:
                std::cout<<"Please select a number from the menu"<<std::endl;
        }
    }
    return 0;
}
