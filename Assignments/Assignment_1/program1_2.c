/*
    2. Program to print 5 times "Marvellous" on screen.
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   - 
//  Output          :   Display string 5 times
//  Description     :   Display string 5 times
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
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