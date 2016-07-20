//
//  FibonacciR.hpp
//  lab10
//
//  Created by Alexander Laquitara on 3/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  FibonacciR.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/8/2016
 ** Description: Header file for class FibonnacciR
 ** Input:  const int N
 ** Output:  Fibonacci sequence for n (recursive)
 *********************************************************************/
//Taken from http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C
#ifndef FibonacciR_hpp
#define FibonacciR_hpp

#include <stdio.h>

class FibonacciR {
public:
    FibonacciR(const int &n);
    virtual ~FibonacciR();
    void PrintFibonacci();
private:
    FibonacciR();
    int Fibonacci(const int &n);
    const int *n_;
};
#endif /* FibonacciR_hpp */
