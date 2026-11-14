/*
    Accept number of rows and number of columns from user
    and display below pattern.

    Input:      iRow = 4       iCol = 4

    Output:     1   2   3   4
                    2   3   4
                        3   4
                            4
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
//  Date            :   14/11/2026
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
            if(i > j)
            {
                printf(" \t");
            }
            else{
                printf("%d\t",j);
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
    Logic:

    1. Check relation between i and j
       where white spaces are there.
       Write condition to dispaly white spaces.
    2. Print expected number either (i or j) in remaining 
       places.        
*/