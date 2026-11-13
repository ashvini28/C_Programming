/*
    Accept number of rows and number of columns from user 
    and display below pattern.

    Input:      iRow = 3        iCol = 5

    Output:     A   A   A   A   A
                B   B   B   B   B
                C   C   C   C   C
                
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
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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