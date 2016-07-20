//
//  main.cpp
//  lab1a
//
//  Created by Alexander Laquitara on 1/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
/*********************************************************************  
 ** Program Filename: main.cpp
 ** Author: Alexander Laquitara
 ** Date: 1/4/16
 ** Description: Main function for calling readMatrix and determinant functions.
 ** Input: A dynamic 2d array and the size of the array which is determined by the user.
 ** Output: The contents of the array by line and the determinant of the matrix created.
 *********************************************************************/

#include <iostream>
#include "readMatrix.hpp"
#include "determinants.hpp"

int main(int argc, const char * argv[]) {
    
    int size, i, j;
    std::cout<< "what is the size of the square, 2 or 3?" <<std::endl;
    std::cin>> size;
    int **array;
    
    
    array = new int* [size];
    for( i = 0; i<size; i++){
        array[i] =new int [size];
    }
    
    readMatrix(array, size);
    
    std::cout<<"Your array consists of the following: " <<std::endl;
    for ( i = 0; i<size; i ++){
        for( j = 0; j<size; j++){
    
            std::cout<<array[i][j]<< " "<< std::endl;
        }
    }
    
    determinant(array, size);
    
    return 0;
}
