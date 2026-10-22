/*
    3. Program to print 5 to 1 numbers on screen.
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   - 
//  Output          :   Print 5 to 1 numbers
//  Description     :   Print 5 to 1 numbers
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
    
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    Display();

    return EXIT_SUCCESS;
}