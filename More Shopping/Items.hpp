//
//  Items.hpp
//  Assignment2
//
//  Created by Alexander Laquitara on 1/22/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Items.hpp
 ** Author:    Alexander Laquitara
 ** Date:  1/22/2016
 ** Description: Header file for Items Class.  Creates an Items and has
    all the necessary info for the Items created.
 ** Input:  None
 ** Output:  None
 *********************************************************************/

#ifndef Items_hpp
#define Items_hpp

#include <stdio.h>
#include <string>

class Items{
   
    protected:
        std::string name, unit;
        int quantity;
        double price;
    
    public:
        Items();
        Items(std::string, std::string, int, double);
    
        std::string getName();
        std::string getUnit();
        int getQuantity();
        double getPrice();
    
        void setName(std::string);
        void setUnit(std::string);
        void setQuantity(int);
        void setPrice(double);
        double extendedPrice();
    
        friend bool operator == (Items a, Items b); //page 731 gaddis.
};

#endif /* Items_hpp */
