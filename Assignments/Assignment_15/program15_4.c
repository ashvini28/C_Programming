/*
    Write a program which accept three numbers and 
    print its multiplication.

    Input:  5   4   7
    Output: 140

    Input:  5   0   7
    Output: 0

    Input:  5   0   0
    Output: 0

    Input:  0   0   0
    Output: 0

*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Input           :   Integer, Integer, Integer
//  Output          :   Display multiplication.
//  Description     :   Accept three numbers and   
//                      print its multiplication.
//  Date            :   13/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    return iNo1 * iNo2 * iNo3;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d", &iValue1,&iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2, iValue3);

    printf("Multiplication is :%d", iRet);

    return EXIT_SUCCESS;
}