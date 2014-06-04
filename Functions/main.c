//
//  main.c
//  Functions
//
//  Created by Keith Samson on 6/4/14.
//  Copyright (c) 2014 Keith Samson. All rights reserved.
//

#include <stdio.h>

//in C, you need to prototype your variable before using it
int addTwoVar();

int main(int argc, const char * argv[])
{
    //fill in your desired values for your variables
    int x = 10;
    int y = 9;
    
    //pass two arugments only to addTwoVar or it won't work
    printf("The sum of x and y is: %d\n", addTwoVar(x, y));
    
    return 0;
}

//create a function with two parameters
int addTwoVar(int firstNum, int secondNum){
    int sum = firstNum + secondNum;
    return sum;
}