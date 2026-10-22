/*
    1. Find the Greatest of Three Numbers

    Problem statement:
    Accept three integers and determine the greatest 
    number among them. The program must also work correctly
    when two or all three numbers are equal.

    Expected Output:
    1. Input: 10 50 30 -> 50 is Greatest
    2. Input: 40 40 20 -> 40 is Greatest
    3. Input: 15 15 15 -> 15 is Greatest
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreatest 
//  Input           :   Integer, Integer, Integer
//  Output          :   Display Greatest Number
//  Description     :   Find the Greatest of Three Numbers
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("%d is Greatest", iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("%d is Greatest", iSecond);
    }
    else{
        printf("%d is Greatest", iThird);
    }
}
///////////////////////////////////////////////////////////

//
//  Entry point of the application
//
///////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}