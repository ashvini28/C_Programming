/*
    2. Check Admission Eligibility

    Problem statement:
    A student is eligible for admission if the student's marks
    are at least 60 and age is at least 17 years. Accept both
    values and determine eligibility. Negative age or marks 
    outside 0-100 must be treated as invalid input.

    Expected Output:
    1. Input: 75 18  -> Eligible for Admission
    2. Input: 55 19  -> Not Eligible
    3. Input: 80 16  -> Not Eligible
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckAdmission 
//  Input           :   Float, Integer
//  Output          :   Display Eligible for Admission 
//                      or not
//  Description     :   Check Admission Eligibility
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if(iAge < 17 && (fMarks < 0  || fMarks >100))
    {
        printf("Invalid Input");
        return;
    }
    if(iAge >= 17 && fMarks >= 60)
    {
        printf("Eligible for Admission");
    }
    else{
        printf("Not Eligible");
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
    int iAge = 0;

    printf("Enter marks and age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}