//
//  summation.cpp
//  lab1
//
//  Created by Alexander Laquitara on 6/16/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename: average.hpp
 ** Author:   Alexander Laquitara
 ** Date: 6/16/15.
 ** Description:  implimentation file for class summation
 ** Input: arrray of doubles and int size of array
 ** Output: total of the array
 *********************************************************************/

#include "summation.h"
#include <iostream>



/*********************************************************************
 ** Function:  sum
 ** Description:  finds the total of an array of doubles
 ** Parameters:  Array of doubles and size int of array
 ** Pre-Conditions:  Class object must exist
 ** Post-Conditions:  returns total
 *********************************************************************/
double Summation:: sum(const double sumArray[], int size)
{
   
    double total = 0.0;
    

    for (int count = 0 ; count <size; count++)
        total += sumArray[count];
    return total;
    
}

    
