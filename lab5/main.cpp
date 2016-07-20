//
//  main.cpp
//  lab5
//
//  Created by Alexander Laquitara on 2/1/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include <iostream>


int **init(int x, int y)
{
    int **temp;
    
    temp = new int*[y];
    for(int i = 0; i < y; i++)
    {
        temp[i] = new int[x];
    }
    return temp;
}

void fill(int **&arr, int x, int y){
    
    int c = NULL; // just a counter variable
    
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            arr[i][j] = c; // initializing array to be all 0's
            //c++; // This would be to count up from 0
        }
    }
    
}

void print(int **array, int x, int y){
    
    for(int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void remove(int **&arr, int y){
    
    for(int i = 0; i < y; i++)
        delete(arr[i]); // deleting the little fingers of the array
    
    delete(arr); // deleting the array
    
}



int main(int argc, const char * argv[]) {
    int **array;
    int y = 20;
    int x =20;
    array=init(x,y);
    fill(array, x, y);
    print(array, x,y);
    remove(array,y);
    
    
    
    
    return 0;
}
