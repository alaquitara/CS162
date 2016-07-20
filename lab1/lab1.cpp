//
//  lab1.cpp
//  lab1
//
//  Created by Alexander Laquitara on 6/16/15.
//  Copyright (c) 2015 Alexander Laquitara. All rights reserved.
//
/*********************************************************************
 ** Program Filename: lab1.cpp
 ** Author:   Alexander Laquitara
 ** Date: 6/16/15.
 ** Description:  main function for lab 1
 ** Input: Average Class and Summation class
 ** Output: Average and Total of the arrays gather by user input data
 *********************************************************************/

#include <string>
#include "average.h"
#include "summation.h"
#include <iostream>
using std:: cin;
using std:: cout;
using std:: endl;


double sum (const double[], int); // prototype function
double avg (const double[], int); //    "         "

int main() {
    
    Average a; //declares an average object a
    
    Summation s; //declares a summation object s
    
    
    int sizeAvg, sizeSum;
    double userNums[sizeAvg] ,sumRay [sizeSum];
    
    cout<< "please enter how many numbers you would you like to know the average of:" << endl;
    cin >> sizeAvg;
    if (cin.fail()) //
    {
        cin.clear();// clears input
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input and move on without crashing

    }
    
    else
    {
        for (int count=0; count< sizeAvg ; count++)
        {
        cout<< "input #" << (count+1) << "  ";
        cin>>userNums[count];
        
            std::string invalid_input;
            while (cin.fail()){ //validates correct input into the array
                cout << "You entered a value of the wrong type!" << endl;
                cin.clear();
                getline(cin,invalid_input);
                cout << "Enter a double this time: " << endl;
                cin >> userNums[count];
            }
        }
    cout<< "the average of those numbers is: "<< a.avg(userNums, sizeAvg)<< endl;
    }


    //now we impliment the sum object
    cout<< "how many number would you like to know the sum of?" << endl;
    cin>> sizeSum;
    
    if (cin.fail()) //validates correct value for sizeSum
    {
        cin.clear();// clears input
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }

    else
    {
        for (int count=0; count < sizeSum ; count++)
        {
        cout<< "input #" << (count+1) << "  ";
        cin>>sumRay[count];
            
            std::string invalid_input;
            while (cin.fail()){ //validates correct input into the array
                cout << "You entered a value of the wrong type!" << endl;
                cin.clear();
                getline(cin,invalid_input);
                cout << "Enter a double this time: " << endl;
                cin >> sumRay[count];
            }
        }
    cout<< "the sum of those numbers is " << s.sum(sumRay, sizeSum)<< endl;
    }
    
    
    //The following blocks of code may be un-commented for purposes of testing specific values
    /*
     const int sizAvg = 10; // the 10 is modifiable to any number you wish to use
     double userAvg[sizAvg]= {0,0,0,0,0,0,0,0,0,0};  //adjust numbers as you wish
     
     
     cout<< "the average of those numbers is" << a.avg (userAvg, sizAvg) << endl;
    
     const int sizSum = 10;  // the 10 is modifiable to any number you wish to use
     double userSum[sizSum] = {0,0,0,0,0,0,0,0,0,0}; //adjust numbers as you wish
    
    
    cout<< "the sum of those numbers is" << s.sum (userSum, sizSum) << endl;
    
     */
     
    
    
    
    return 0;
     
    
    
}
