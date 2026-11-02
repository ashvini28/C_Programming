/*
    1. Write a program which accept number from user 
    and if number is less than 50 then print small 
    if it is greater than 50 and less than 100 then 
    print medium if it is greater than 100 then print 
    large.
*/

///////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Input           :   Integer
//  Output          :   Display small, medium, large
//                      Based on the result
//  Description     :   Decide whether given number is
//                      mall, medium, large based on 
//                      given conditions
//  Date            :   2/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;

    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo>=50) && (iNo<100))
    {
        printf("Medium");
    }
    else 
    {
        printf("Large");
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}