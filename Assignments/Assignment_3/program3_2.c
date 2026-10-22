/*
    Write a program which accepts a number from 
    user and print all factors of that number.
    
    Input:  24
    Output:  1   2   3   4   6   8   12

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Print all factors of that 
//                      number
//  Description     :   Print all factors of that 
//                      number
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    //Input updater
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo/2; i++)
    {

        if ((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}
