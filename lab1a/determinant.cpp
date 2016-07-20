//
//  determinant.cpp
//  lab1a
//
//  Created by Alexander Laquitara on 1/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
#include <iostream>
#include "determinant.hpp"

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
        sum = b[0][0]*(b[1][1]*b[2][2] - b[0][2]*b[2][1]) - b[0][01]*(b[1][0]*b[2][2] - b[1][2]*b[2][0]) + b[0][2]*(b[1][0]*b[2][1] - b[1][1]*b[2][0]);
        std::cout<<"the determinant of the matrix is: "<< sum <<std::endl;
    
    }
    return sum;
    
}
