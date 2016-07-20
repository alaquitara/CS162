//
//  determinants.cpp
//  lab1a
//
//  Created by Alexander Laquitara on 1/5/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
/*********************************************************************
 ** Program Filename: determinanats.cpp
 ** Author: Alexander Laquitara
 ** Date: 1/4/16
 ** Description: Implementation file for the determinanat function.
 ** Input: A dynamic 2d array and the size of the array which is determined by the user.
 ** Output: The determinant of the array/matrix that was inputted.
 *********************************************************************/

#include "determinants.hpp"
#include <iostream>


/*********************************************************************  
 ** Function:  int determinant
 ** Description:  returns the determinanat of a 2d array of either size 2x2 or 3x3
 ** Parameters:  a pointer to a 2d array and the size of the array.
 ** Pre-Conditions:  Array must have data from readMatrix function and size must be  
                     determined by the user.
 ** Post-Conditions:  returns the value of the determinant.
 *********************************************************************/
int determinant(int **b, int size){
    int sum = 0;
    
    if(size == 2) // |A| = ad - bc
    {
        sum = b[0][0]*b[1][1] - b[0][1]*b[1][0];
        std::cout<<"the determinant of the matrix is: "<< sum <<std::endl;
        return sum;
    }
    
    
    else if (size == 3) // |A| = a(ei - fh) - b(di - fg) + c(dh - eg)
    {
        sum = b[0][0]*(b[1][1]*b[2][2] - b[1][2]*b[2][1]) - b[0][01]*(b[1][0]*b[2][2] - b[1][2]*b[2][0]) + b[0][2]*(b[1][0]*b[2][1] - b[1][1]*b[2][0]);
    }
    std::cout<<"the determinant of the matrix is: "<< sum <<std::endl;
    return sum;
    
}
