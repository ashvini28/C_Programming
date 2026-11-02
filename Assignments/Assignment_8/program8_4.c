/*
    4.Write program which accept number from user 
    and display its table

    Input   :   2
    Output  :   2 4 6 8 10 12 14 16 18 20

    Input   :   5
    Output  :   5 10 15 20 25 30 35 40 45 50

    Input   :   -5
    Output  :   5 10 15 20 25 30 35 40 45 50
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   Table
//  Input           :   Integer
//  Output          :   Display given number's table
//  Description     :   Accept number from user 
//                      and display its table
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt =1; iCnt<=10 ;iCnt++)
    {
       printf("%d\t",iNo * iCnt);
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

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}