//
//  FibonacciR.cpp
//  lab10
//
//  Created by Alexander Laquitara on 3/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  FibonacciR.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/8/2016
 ** Description: Implementation file for class FibonnacciR
 ** Input:  const int N
 ** Output:  Fibonacci sequence for n (recursive)
 *********************************************************************/
#include "FibonacciR.hpp"
#include <iostream>

FibonacciR::FibonacciR() {
    }

FibonacciR::FibonacciR(const int &n):n_(&n){
    }

FibonacciR::~FibonacciR() {
    }
/*********************************************************************
 ** Function: Fibonacci
 ** Description: Returns the fibonacci value of n
 ** Parameters:  int n
 ** Pre-Conditions: n comes from main
 ** Post-Conditions:  none
 *********************************************************************/
int FibonacciR::Fibonacci(const int &n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

/*********************************************************************
 ** Function: PrintFibonacci
 ** Description: Prints the results of Fibonacci
 ** Parameters:  none
 ** Pre-Conditions: Fibonacci object exists
 ** Post-Conditions:  none
 *********************************************************************/
void FibonacciR::PrintFibonacci(){
    int FibonaciNum=Fibonacci(*n_);
    std::cout<<*n_<<"th fibonaci number: "<<FibonaciNum<<std::endl;
}