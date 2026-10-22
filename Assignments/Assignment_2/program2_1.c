/*
    1. Accept one number from user and print that 
    number of * on screen
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer
//  Output          :   Printed n number of *
//  Description     :   Performs pattern printing
//  Date            :   21/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    //write updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
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
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}