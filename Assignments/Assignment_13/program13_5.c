/*
    5.Write a program which accept number from user
    and return difference between summation of even
    digits and summation of odd digits.

    Input:  2395
    Output: -15 (2 - 17)

    Input:  1018
    Output: 6 (8 - 2)
    
    Input:  8440
    Output: 16 (16 - 0)
    
    Input:  5733
    Output: -18 (0 - 18)
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   
//  Input           :   Integer
//  Output          :   Display multiplication of all  
//                      digits.
//  Description     :   Accept a number from user and 
//                      return multiplication of all 
//                      digits.
//  Date            :   11/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iDiff = 0;
    int sumEven = 0;
    int sumOdd = 0;

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       
       if((iDigit % 2) == 0)
       {
            sumEven = sumEven + iDigit;
       }
       else
       {
            sumOdd = sumOdd + iDigit;
       }

       iNo = iNo / 10;
    }
    
    iDiff = sumEven - sumOdd;

    return iDiff;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even digit sum and odd digit sum is : %d",iRet);

    return EXIT_SUCCESS;
}