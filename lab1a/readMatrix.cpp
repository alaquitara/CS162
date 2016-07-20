//
//  readMatrix.cpp
//  lab1a
//
//  Created by Alexander Laquitara on 1/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename: readMatrix.cpp
 ** Author: Alexander Laquitara
 ** Date: 1/4/16
 ** Description: Implementation file for the readMatrix function.  Allows user to input data into a 2d array
 ** Input: A dynamic 2d array and the size of the array which is determined by the user.
 ** Output: a user inputted 2d array
 *********************************************************************/
#include <iostream>
#include "readMatrix.hpp"


/*********************************************************************
 ** Function:  void readMatrix
 ** Description:  Allows user to input data into a 2d array.
 ** Parameters:  a pointer to a 2d array and the size of the array.
 ** Pre-Conditions:  must have a blank 2d array of a valid size.
 ** Post-Conditions:  a user inputted 2d array.
 *********************************************************************/
void readMatrix(int **array, int size){
    
    if(size == 2 || size == 3){  //validates correct size of the array
        
        for (int i = 0; i < size; i++){
            array[i] = new int[size];
            for(int j = 0; j < size; j++){
                std::cout<< "enter row: "<< i+1<< std::endl;
                std::cin >> array[i][j];   //writes conent to the array
            }
        }
    }
    
    else{ //invalid input for size.
        std::cout<<"invalid size"<<std::endl;
        exit(EXIT_FAILURE);
    }
}

