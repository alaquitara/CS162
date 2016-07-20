//
//  FibonacciNR.hpp
//  lab10
//
//  Created by Alexander Laquitara on 3/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef FibonacciNR_hpp
#define FibonacciNR_hpp

#include <stdio.h>
#include <time.h>

/*********************************************************************
 ** Program Filename:  FibonacciNR.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/8/2016
 ** Description: Header file for class FibonnacciNR
 ** Input:  const int N
 ** Output:  Fibonacci sequence for n (non-recursive)
 *********************************************************************/
//Taken from http://www.codeproject.com/Tips/109443/Fibonacci-Recursive-and-Non-Recursive-C
class FibonacciNR {
public:
    FibonacciNR(const int &n);
    virtual ~FibonacciNR();
    void PrintFibonacci();
private:
    FibonacciNR();
    int Fibonacci(const int &n);
    const int* n_;
};
#endif /* FibonacciNR_hpp */
