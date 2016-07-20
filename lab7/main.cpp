//
//  main.cpp
//  lab7
//
//  Created by Alexander Laquitara on 2/18/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename:  Main.cpp
 ** Author:    Alexander Laquitara
 ** Date:  2/19/2016
 ** Description: Demonstration of a line search, Binary Search, and Bubble Sort
 ** Input:  Text files consisting of numbers by line.
 ** Output:  displays what line the desired number is on or sorts numbers in order.
 *********************************************************************/
#include <fstream>
#include <iostream>
#include <string>

int searchList(std::ifstream& in, int value);
void bubSort(std::ifstream& in, std::ofstream& out);
int binarySearch(std::ifstream& in, int value);

int main(int argc, const char * argv[]) {
    
    std::string inFile, outFile;

    int choice = 0;
    int value;
    
    
    while(choice != 4)
    {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1: Line Search" << std::endl;
        std::cout << "2: Bubble Sort" << std::endl;
        std::cout << "3: Binary Search" << std::endl;
        std::cout << "4: Quit" << std::endl;
        std::cin >> choice;
        std::cin.ignore();
        
        switch (choice)
        {
            case 1:
            {
                std::cout << "Which number would you like to find?:";
                std::cin >> value;
                std::cout << "Enter File Name :";
                std::cin >> inFile;
                std::ifstream ifs(inFile.c_str(),std::ios::in);
                std::cout<<value<<" found on line # "<<searchList(ifs,value)<<std::endl;
                break;
            }
                
            case 2:
            {
                std::cout << "Which file would you like to sort?:";
                std::cin >> inFile;
                
                std::cout << "Enter name of output file:";
                std::cin >> outFile;
                
                std::ifstream ifs(inFile.c_str(),std::ios::in);
                std::ofstream ofs(outFile.c_str(),std::ios::app);
                
                bubSort(ifs,ofs);
                break;
                
            }
            case 3:
            {
                std::cout << "Which number would you like to find:";
                std::cin >> value;
                std::cout << "Enter File Name :";
                std::cin >> inFile;
                std::ifstream ifs(inFile.c_str(),std::ios::in);
                std::cout<<value<<" found on line # "<<binarySearch(ifs,value)<<std::endl;                break;
            }
        }
    }
    
    return 0;
}

/*********************************************************************
 ** Function: searchList
 ** Description: performs a linear search for value desired.  Copies
                value from file to an array.
 ** Parameters:  an ifstream by reference and the int to be found.
 ** Pre-Conditions: input file exists
 ** Post-Conditions:  returns the position of desired value.
 *********************************************************************/
//Page 597 book.
int searchList(std::ifstream& in, int value)
{
    int num;
    int index = 0;
    int array[20];
    bool found = false;
    int position = -1;
    
    while(in >> num)
    {
        array[index] = num;
        index++;
    }
    
    for(int i = 0; i<19; i++)
    {
        if (array[index] == value)
        {
            found = true;
            position = index;
        }
    
    }
    return position;
    
}

/*********************************************************************
 ** Function: bubSort
 ** Description: Takes a file as input, sorts the values and writes them
                post sort to a new file
 ** Parameters:  an ifstream by reference and ofstream by reference
 ** Pre-Conditions: input file exists
 ** Post-Conditions:  writes a sorted list to desired file.
 *********************************************************************/
//page 609 book
void bubSort(std::ifstream& in, std::ofstream& out)
{
   
    int temp;
    int num;
    int array[20];
    bool swap;
    int counter = 0;
    
    while(in >> num)
    {
        array[counter] = num;
        counter++;
    }
    
    do
    {
        swap =false;
        for(int count = 0; count < 19; count ++)
        {
            if (array[count] > array[count+1])
            {
                temp =array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
            }
        }
    }while (swap);
    
    for(int i = 0; i<=19; i++)
    {
        out <<array[i]<<std::endl;
    }
}

/*********************************************************************
 ** Function: binarySearch
 ** Description: performs a binary search for value desired.  Copies
 value from file to an array.
 ** Parameters:  an ifstream by reference and the int to be found.
 ** Pre-Conditions: input file exists
 ** Post-Conditions:  returns the position of desired value.
 *********************************************************************/
//page 601 book
int binarySearch(std::ifstream& in, int value)
{
    int array[20];
    int first  = 0,
        last = 19,
        middle,
        position = -1;
    bool found  = false;
    
    while(!found && first <= last)
    {
        middle = (first +last) /2;
        if(array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle -1;
        else
            first = middle +1;
    }
    return position;
}

    

