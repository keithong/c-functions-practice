//
//  main.c
//  Functions
//
//  Created by Keith Samson on 6/4/14.
//  Copyright (c) 2014 Keith Samson. All rights reserved.
//

#include <stdio.h>

int addTwoVar();
int main(int argc, const char * argv[])
{
    int x = 10;
    int y = 9;
    int sum = addTwoVar(x, y);
    
    printf("The sum of x and y is: %d\n", sum);
    return 0;
}

int addTwoVar(int firstNum, int secondNum){
    int sum = firstNum + secondNum;
    return sum;
}