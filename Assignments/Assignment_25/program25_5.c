/*
    Accept division of student from user and depends on
    the division display exam timing. There are 4 divisions
    in school as A, B, C, D. Exam of division A at 7 AM,
    B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.(Application
    should be case insensitive)

    Input:  C
    Output: Your exam at 9.20 AM.

    Input:  d
    Output: Your exam at 10.30 AM.
*/
#include <stdio.h>
#include <stdlib.h>
 
///////////////////////////////////////////////////////
//
//  Function Name   :   DisplaySchedule
//  Input           :   character
//  Output          :   Display timing based on division                   
//  Description     :   Based on the division display
//                      exam timing.
//  Date            :   18/11/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM.");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM.");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM.");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM.");
    }
    else
    {
        printf("Invalid division\n");
    }
}

///////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
