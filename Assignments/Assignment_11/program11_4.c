/*
    1. Write a program which accept range from user 
    and return addition of all even numbers in between 
    that range.(Range should contains positive numbers only)

    Input:  23 30 
    Output: 108

    Input: 10 18
    Output: 70

    Input: -10 2
    Output: Invalid range

    Input: 90 18
    Output: Invalid range
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   RangeSumEven
//  Input           :   Integer, Integer
//  Output          :   Display addition of all even
//                      numbers in between that range.
//  Description     :   Accept range from user and 
//                      display addition of all even 
//                      numbers in between that range.
//  Date            :   10/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet >= 0)
    {
        printf("Addition is : %d",iRet);
    }
    
    return EXIT_SUCCESS;
}