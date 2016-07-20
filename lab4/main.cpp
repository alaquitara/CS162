//
//  main.cpp
//  lab4
//
//  Created by Alexander Laquitara on 1/27/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
#include <vector>
#include <iostream>
#include <string>

/*********************************************************************
 ** Program Filename:  Main.hpp
 ** Author:    Alexander Laquitara
 ** Date:  1/27/2016
 ** Description: Main menu and functions for lab 3
 ** Input:  one of 3 recursive functions
 ** Output:  results of calling function
 *********************************************************************/

/*********************************************************************
 ** Function: triangle
 ** Description: recursively returns the triangle number of an int
 ** Parameters:  integer
 ** Pre-Conditions: none
 ** Post-Conditions:  None
 *********************************************************************/
int triangle(int tri)
{
    if (tri >= 1) // base case
    {
        return tri + triangle(tri-1);
    }
    else
    {
        return 0;
    }
}

/*********************************************************************
 ** Function: array_sum
 ** Description: recursively returns the sum of an array
 ** Parameters:  integer of arrays and integer for size of array
 ** Pre-Conditions: array is made in main
 ** Post-Conditions:  None
 *********************************************************************/
int sumArray(int arrayIn[], int size)
{
    int total = 0;
    
    if (size == 1)// base case
    {
       return total = arrayIn[0];
    }
    else;
    return arrayIn[size -1] + sumArray(arrayIn, size - 1);
}


/*********************************************************************
 ** Function: array_sum
 ** Description: recursively returns a string reversed
 ** Parameters:  string to be reversed
 ** Pre-Conditions: none
 ** Post-Conditions:  None
 *********************************************************************/
//http://www.cplusplus.com/reference/string/string/substr/
std::string stringReverse(std::string s)
{
    if(s.length()==1) // base case
    {
        return s;
    }
    
    std::string word=s.at(s.length()-1)+stringReverse(s.substr(0,s.length()-1));
    
    return word;
}

int main ()
{
    
    std::string stringIn, result;
    int select, triInt, value;
    std::vector<int> vsize;
    
    while(select !=4)
    {
        std::cout<< "Please select from the following options"<<std::endl;
        std::cout<<"Select 1 use the string reverse funciton"<<std::endl;
        std::cout<<"Select 2 to add up the contents of an array"<<std::endl;
        std::cout<<"Select 3 to find the triangle number"<<std::endl;
        std::cout<<"Select 4 to close the program"<<std::endl;
        std::cin>> select;
        
        switch (select)
        {
            case 1:
            {
                std::cout<<"Please enter a string"<<std::endl;
                
                std::cin>>stringIn;
                
                result =stringReverse(stringIn);
                
                std::cout<<stringReverse(stringIn)<<std::endl;
               
                
                break;
            }
                
            case 2:
            {
                int choice= 1;
                int a[vsize.size()];
                while(choice == 1)
                {
                    std::cout<<"enter an integer:"<<std::endl;
                    std::cin>> value;
                    vsize.push_back(value);
                    std::cout<<"if you wish to enter another number enter 1"<<std::endl;
                    std::cout<<"if you are done entering numbers enter 0"<<std::endl;
                    std::cin>>choice;
                }
                
                for(int i= 0; i<vsize.size(); i++)
                {
                        a[i]=vsize[i];
                }
                std::cout<<"the sum is "<<sumArray(a, int (vsize.size()))<<std::endl;
               
                break;
            }
                
            case 3:
            {
                std::cout<<"For which integer would you like to find the triangle number?"<<std::endl;
                std::cin>>triInt;
                std::cout<<triangle(triInt)<<std::endl;
                break;
            }
            case 4:
                std::cout<<"Closing program"<<std::endl;
                break;
                
            default:
                std::cout<<"Please select a number from the menu"<<std::endl;
        }
    }
    
    return 0;


}