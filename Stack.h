/***********************************************************
 *  Stack.h                                                *
 *  Stack                                                  *
 *                                                         *
 *  Created by Vedant Mathur on 7/29/15.                   *
 *  Copyright (c) 2015 Vedant Mathur. All rights reserved. *
 **********************************************************/

#ifndef __MathParser__Stack__
#define __MathParser__Stack__

//include statements

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Stack
{
public:
    Stack();
    ~Stack();
    
    void push(char* dataElement);
    void freeStack();
    
    bool isEmpty();
    
    //"pop"s the stack
    char* popStr();
    char* pop();
    
private:
    //dynamic arrays to store the stack values
    char** stackArray;
    char** tempArray
    
    //index to monitor the top index of the stack and the size
    int stackIndex;
};

#endif /* defined(__MathParser__Stack__) */
