/*
    3.  Write a program which accepts a number from 
        user and prints even factors of that number.
        
        Input:  36
        Output:  2   6   12   18
        
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Print even factors of that 
//                      number
//  Description     :   Print even factors of that 
//                      number.
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    //Input updater
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {

        if (((i % 2) == 0) && ((iNo % i) == 0))
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

    DisplayEvenFactor(iValue);

    return EXIT_SUCCESS;
}
