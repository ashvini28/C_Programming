/*
    Accept number of rows and number of columns from user 
    and display below pattern.

    Input:      iRow = 5        iCol = 5

    Output:     1   2   3   4   5
               -1  -2  -3  -4  -5
                1   2   3   4   5
               -1  -2  -3  -4  -5
                1   2   3   4   5

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
    
    for(i = 1; i <= iRow; i++)
    {
      if((i % 2) == 0)
        {
            iCount = -1; 
        }
        else
        {
            iCount = 1; 
        }

        for(j = 1; j <= iCol; j++)
        {           
            if((i % 2) == 0)
            {
                printf("%d\t", iCount);
                iCount--; 
            }
            else
            {
                printf(" %d\t", iCount);
                iCount++; 
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