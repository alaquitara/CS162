//
//  main.cpp
//  lab10
//
//  Created by Alexander Laquitara on 3/8/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
//https://www.cilkplus.org/fibcpp
#include <iostream>
#include "time.h"
#include "FibonacciNR.hpp"
#include "FibonacciR.hpp"
/*********************************************************************
 ** Program Filename:  main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  3/8/2016
 ** Description: Main file for demonstration and clock time mesurment of functions.
 ** Input:  int n and int fac
 ** Output:  Clock times are calculated
 *********************************************************************/
//referenced http://www.cplusplus.com/reference/ctime/clock/ for clocking procedures.
long rfactorial(int);
long factorialHelper (int, int);
long factorial(int );

int main(int argc, const char * argv[]) {
   
    int n;
    std::cout<<"For which number would you like to find the Fibonacci sequece and compare speed?"<<std::endl;
    std::cin>>n;
    std::cout<<'\n';
    
    std::cout<<"Displaying results for the non recursive fibonacci function"<<std::endl;
    time_t t;
    t = clock();
    FibonacciNR fib1(n);
    fib1.PrintFibonacci();
    std::cout << "It took " << (clock() - t) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    
    std::cout<<"Displaying results for the recursive fibonacci function"<<std::endl;
    
    t = time(0);
    FibonacciR fib2(n);
    fib2.PrintFibonacci();
    std::cout << "It took " << (clock() - t) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    std::cout<<'\n';
    
    int fac;
    std::cout<<"what factorial would you like to calcuate and measure run speed?"<<std::endl;
    std::cin>>fac;
    
    
    std::cout<<"\nDisplaying results for the non tail recursive factorial function"<<std::endl;
    
    t = time(0);
    rfactorial(fac);
    std::cout << "It took " << (clock() - t) / (double)(CLOCKS_PER_SEC / 1000) << " ms";
    std::cout<<"for the factorial of "<< fac<<std::endl;
    
    std::cout<<"Displaying results for the tail recursive factorial function"<<std::endl;
    t = time(0);
    factorial(fac);
    std::cout << "It took " << (clock() - t) / (double)(CLOCKS_PER_SEC / 1000) << " ms";
    std::cout<<"for the factorial of "<< fac<<std::endl;
    
    
    return 0;
}



/*********************************************************************
 ** Function: rFactorial
 ** Description: Returns the factorial of n (non-Tail)
 ** Parameters:  int n
 ** Pre-Conditions: n comes from main
 ** Post-Conditions:  none
 *********************************************************************/
// From Lab
long rfactorial (int n)
{
    if (n == 1)
        return 1;
    else
        return n * rfactorial(n-1);
}


/*********************************************************************
 ** Function: factorialHelper
 ** Description: Sets the conditions for Long factorial(int n) (with tail)
 ** Parameters:  int n int results
 ** Pre-Conditions: n comes from main results for recursion
 ** Post-Conditions:  none
 *********************************************************************/
long factorialHelper (int n, int result)
{
    if (n == 1)
        return result;
    else
        return factorialHelper(n-1,n*result);}

/*********************************************************************
 ** Function: factorial
 ** Description: calls helper function to solve for n
 ** Parameters:  int n
 ** Pre-Conditions: n comes from main 
 ** Post-Conditions:  none
 *********************************************************************/
long factorial(int n)
{
    return factorialHelper(n,1);
}
