/*
    4. Check Triangle Validity

    Problem statement:
    Accept three integer values representing the lengths of the sides
    of a triangle. Determine whether they can form a valid triangle.
    All sides must be positive and the sum of any two sides must be 
    greater than the third side. 

    Expected Output:
    1. Input: 3 4 5  -> Valid Triangle 
    2. Input: 1 2 3 -> Invalid Triangle 
    3. Input: 0 4 5 -> Invalid Triangle 
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckTriangle 
//  Input           :   Integer, Integer, Integer
//  Output          :   Display if triangle is valid or not
//  Description     :   Check Triangle Validity
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 < 0 || iSide2 < 0 || iSide3 < 0)
    {
        printf("Invalid Input");
        return;
    }

    if(
        (iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0) 
        && (iSide1 + iSide2 > iSide3) 
        && (iSide1 + iSide3 > iSide2) 
        && (iSide2 + iSide3 > iSide1)
    )
    {
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
}

///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}