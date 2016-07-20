//
//  LoadedDie.hpp
//  Lab3
//
//  Created by Alexander Laquitara on 1/17/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Die.hpp
 ** Author:   Alexander Laquitara
 ** Date:  1/17/15
 ** Description:  Header file for the LoadedDie class.  it is a child
    of class Die
 ** Input:  Die Class
 ** Output: a LoadedDie object
 *********************************************************************/
#include "Die.hpp"
#include <stdio.h>
#ifndef LoadedDie_hpp
#define LoadedDie_hpp


class LoadedDie : public Die
{
public:
    LoadedDie();
    LoadedDie(int);
    int rollLoadedDie();
};


#endif /* LoadedDie_hpp */
