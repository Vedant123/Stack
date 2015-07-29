/***********************************************************
 *  Stack.cpp                                              *
 *  Stack                                                  *
 *                                                         *
 *  Created by Vedant Mathur on 7/29/15.                   *
 *  Copyright (c) 2015 Vedant Mathur. All rights reserved. *
 **********************************************************/

#include "Stack.h"

Stack::Stack() //constructor
{
    stackIndex = 0; //initializes stackIndex to 0
    
    stackArray = (char **)malloc(sizeof(char*) * (stackIndex + 1)); //allocates memory for the stack array
}


Stack::~Stack() //destructor
{
    
}

//function to push data onto the stack
void Stack::push(char* dataElement)
{
    //sets the value of the new element in the stack
    stackArray[stackIndex] = (char*)dataElement;
    stackIndex++; //increments stackIndex
    
    //allocates more memory to the stack array through the tempArray
    tempArray = (char **)realloc(stackArray, sizeof(char *) * (stackIndex + 1));
    
    //checks if the re-allocation was successful
    if(tempArray != NULL)
    {
        stackArray = tempArray;
    }
    else
    {
        //displays error message and exits program
        cout << "Error in memory (re)allocation" << endl;
        exit(1);
    }
}

void Stack::freeStack()
{
    //clears up extraneous memory
    free(stackArray);
    free(tempArray);
}

bool Stack::isEmpty()
{
    return stackIndex == 0? true: false;
}

char* Stack::popStr()
{
    //returns the top of the stack but doesn't remove it
    return stackArray[stackIndex - 1];
}

char* Stack::pop()
{
    //manipulates temporary variables
    char** tempArray;
    char* tempData = stackArray[stackIndex - 1];
    //allocates one less space of memory to the tempArray, allowing us to remove the top of the stack
    tempArray = (char **)realloc(stackArray, sizeof(char *) * (stackIndex - 1));
    
    //check if re-allocation was successful
    if(tempArray != NULL)
    {
        stackArray = tempArray;
    }
    else
    {
        //displays error message and exits program
        cout << "Error in memory (re)allocation" << endl;
        exit(1);
    }
    --stackIndex; //decrements stackIndex as there is one less element in the array
    
    return tempData; //returns tempData
}
