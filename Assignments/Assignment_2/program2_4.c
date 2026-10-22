/*
    Accept two numbers from user and display first number 
    in second number of times

    Input : 12  5
    Output : 12  12  12  12  12

    Input : -2  3
    Output : -2 -2  -2

    Input : 21  -3
    Output : 21  21  21

    Input : -2  0
    Output : 

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer, Integer
//  Output          :   Display 1st number in 2nd 
//                      number of times 
//  Description     :   Display 1st number in 2nd 
//                      number of times
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Input updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
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
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}