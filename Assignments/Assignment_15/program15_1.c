/*
    Write a program which accept name from user 
    and print that name.

    Input:  Ashvini Chaudhari
    Output: Ashvini Chaudhari
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    char name[30];

    printf("Please enter full name\n");
    scanf("%[^'\n']s",name);

    printf("Youe name is : %s", name);

    return EXIT_SUCCESS;
}