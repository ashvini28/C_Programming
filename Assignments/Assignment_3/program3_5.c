/*
    5. Accept one character from user and check whether that character 
    is vowel(a,e,i,o,u) or not.
    Input : E       Output : TRUE
    Input : d       Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE  1
#define FALSE 0

///////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel 
//  Input           :   Character
//  Output          :   It is Vowel or It is not Vowel
//  Description     :   Check given character is Vowel 
//                      or not
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

BOOL ChkVowel(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}
