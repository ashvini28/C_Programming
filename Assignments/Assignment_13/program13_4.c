/*
    4.Write a program which accept number from user
    and return multiplication of all digits.

    Input:  2395
    Output: 270

    Input:  1018
    Output: 0
    
    Input:  9440
    Output: 0
    
    Input:  922432
    Output: 864
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   MultDigits
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

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while (iNo != 0)
    {
       iDigit = iNo % 10;
       iMult =  iMult * iDigit;
       iNo = iNo / 10;
    }
    
    return iMult;
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

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits is : %d",iRet);

    return EXIT_SUCCESS;
}