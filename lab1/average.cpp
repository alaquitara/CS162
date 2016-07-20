//
//  average.cpp
//  lab1
//
//  Created by Alexander Laquitara on 6/16/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/********************************************************************* 
 ** Program Filename: average.cpp
 ** Author:   Alexander Laquitara
 ** Date: 6/16/15.
 ** Description:  implementation file for class average
 ** Input:  an array of doubles and size int.
 ** Output: returns the average
 *********************************************************************/



#include "average.h"


/*********************************************************************
 ** Function:  avg
 ** Description:  finds the average an array of doubles
 ** Parameters:  Array of doubles and size int of array
 ** Pre-Conditions:  Class object must exist
 ** Post-Conditions:  returns average
 *********************************************************************/
double Average:: avg(const double avgArray[], int size)
{
   
    int i, sum = 0.0;
    double avg;
    for (i = 0; i< size; i++)
    {
        sum += avgArray[i];
    
    }
    avg=double(sum) / size;
    return avg;
}

