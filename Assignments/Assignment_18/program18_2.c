/*
    Accept number of rows and number of columns from user
    and display below pattern.

    Input:      iRow = 4        iCol = 4

    Output:     *   *   *   *
                *   *   *   #
                *   *   #   #
                *   #   #   #
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= (iCol - i + 1)) 
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");

            }
        }
        printf("\n\n");
    }
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;   
}

/*
    j <= (iCol -i + 1)
    1 <= (4 - 1 + 1) 
    2 <= (4 - 1 + 1) 
    3 <= (4 - 1 + 1) 
    4 <= (4 - 1 + 1) 

    1 <= (4 - 2 + 1) 3
    2 <= (4 - 2 + 1) 
    3 <= (4 - 2 + 1) 
    4 <= (4 - 2 + 1) 

    1 <= (4 - 3 + 1) 2
    2 <= (4 - 3 + 1) 
    3 <= (4 - 3 + 1) 
    4 <= (4 - 3 + 1) 

    1 <= (4 - 4 + 1) 1
    2 <= (4 - 4 + 1) 
    3 <= (4 - 4 + 1) 
    4 <= (4 - 4 + 1) 

*/