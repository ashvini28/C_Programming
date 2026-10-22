/*
    1. Check Voting Eligibility  

    Problem statement:
    Accept the age of a person and determine whether the 
    person is eligible to vote. A person must be at least 
    18 years old to vote. A negative age should be 
    considered invalid.

    Expected Output:
    1. Input: 21 -> Eligible for Voting 
    2. Input: 16 -> Not Eligible for Voting
    3. Input: -5 -> Invalid Age
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVotingEligibility 
//  Input           :   Integer
//  Output          :   Eligible for Voting or
//                      Not Eligible for Voting or
//                      Invalid Age     
//  Description     :   Check Voting Eligibility
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else if(iAge < 18 && iAge > 0)
    {
        printf("Not Eligible for Voting");
    }
    else if (iAge < 0) 
    {
        printf("Invalid Age");     
    }
}

///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter your age:");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}