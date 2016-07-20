//
//  FibonacciNR.cpp
//  lab10
//
//  Created by Alexander Laquitara on 3/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  FibonacciNR.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/8/2016
 ** Description: Implementation file for class FibonnacciNR
 ** Input:  const int N
 ** Output:  Fibonacci sequence for n (non-recursive)
 *********************************************************************/
#include "FibonacciNR.hpp"
#include <iostream>

FibonacciNR::FibonacciNR() {

}
FibonacciNR::FibonacciNR(const int &n):n_(&n){
}

FibonacciNR::~FibonacciNR() {
}

/*********************************************************************
** Function: Fibonacci
** Description: Returns the fibonacci value of n
** Parameters:  int n
** Pre-Conditions: n comes from main
** Post-Conditions:  none
*********************************************************************/
int FibonacciNR::Fibonacci(const int &n)
{
    int first =0;
    int second=1;
    int counter=2;
    while(counter < n)
        {
            int temp=second;
            second=first+second;
            first=temp;
            ++counter;
            }
    if(n==0)
        return 0;
    else
        return first+second;
    }

/*********************************************************************
 ** Function: PrintFibonacci
 ** Description: Prints the results of Fibonacci
 ** Parameters:  none
 ** Pre-Conditions: Fibonacci object exists
 ** Post-Conditions:  none
 *********************************************************************/
void FibonacciNR::PrintFibonacci(){
    const int result = Fibonacci(*n_);
    std::cout<<*n_<<"th fibonacci Number:"<<result<<std::endl;
    }
