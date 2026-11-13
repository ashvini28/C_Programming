/*
    Accept number of rows and number of columns from user 
    and display below pattern.

    Input:      iRow = 4        iCol = 4

    Output:     1   2   3   4
                5   6   7   8
                9   1   2   3
                4   5   6   7
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Input           :   Integer, Integer
//  Output          :   Display given pattern.
//  Description     :   Accept number of rows and number
//                      of columns from user and display 
//                      below pattern.
//  Date            :   13/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;
    iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {           
            printf("%d\t", iCount);

            iCount++;

            if(iCount == 10)
            {
                iCount = 1;
            }
        }
        printf("\n\n");
    }
}
///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}