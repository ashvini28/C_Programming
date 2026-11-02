/*
    4.Write a program to find odd factorial of given 
    number. 

    Input: 5
    Output: 15    (5*3*1)

    Input:-5
    Output:15   (5*3*1)

    Input: 10
    Output: 945     (9*7*5*3*1)
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   OddFactorial
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Write a program to find odd 
//                      factorial of given number. 
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
     int iFact=1;

     if(iNo<0)
     {
        iNo=-iNo;
     }
     while(iNo>0)
     {
        if(iNo%2!=0)
        {
            iFact=iFact*iNo;

        }
        iNo--;
     }
     return iFact;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Odd Factorial of number is : %d\n",iRet);

    return EXIT_SUCCESS;
}