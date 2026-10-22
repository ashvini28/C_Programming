/*
    3. Calculate Student Grade

    Problem statement:
    Accept the marks of student out of 100 and display the 
    grade according to the following criteria. Marks outside
    0-100 are invalid.

    -----------------------------------------
        Marks           Grade
    -----------------------------------------
        90-100          A
    -----------------------------------------
        75-89           B
    -----------------------------------------
        60-74           C
    -----------------------------------------
        40-59           D
    -----------------------------------------
        Below 40        Fail
    -----------------------------------------

    Expected Output:
    1. Input: 85  -> Grade B
    2. Input: 35  -> Fail
    3. Input: 105 -> Invalid Marks
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayGrade 
//  Input           :   Float
//  Output          :   Display Grade either A, B, C, D OR
//                      Fail based on given marks
//  Description     :   Calculate Student Grade
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    //Input filter
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks");
        return;
    }

    if((fMarks >= 90) && (fMarks <= 100))
    {
        printf("A");
    }
    else if((fMarks >= 75) && (fMarks <= 89))
    {
        printf("B");
    }
    else if((fMarks >= 60) && (fMarks <= 74))
    {
        printf("C");
    }
    else if((fMarks >= 40) && (fMarks <= 59))
    {
        printf("D");
    }
    else if(fMarks < 40)
    {
        printf("Fail");
    }
}
///////////////////////////////////////////////////////////

//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}