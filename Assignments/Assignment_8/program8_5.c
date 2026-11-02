/*
    5.Write a program which accept number from user 
    and display its table in reverse order

    Input : 2
    Output: 20 18 16 14 12 10 8 6 4 2 

    Input : 5
    Output: 50 45 40 35 30 25 20 15 10 5 

    Input : 5
    Output: 50 45 40 35 30 25 20 15 10 5 
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   TableRev
//  Input           :   Integer
//  Output          :   display given number's table 
//                      in reverse order
//  Description     :   Accept number from user 
//                      and display its table in reverse 
//                      order given conditions
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 10;iCnt >= 1; iCnt--)
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

    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}
