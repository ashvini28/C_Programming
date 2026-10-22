/*
    4. Accept one character from user and convert case of that character.
    Input : a       Output : A
    Input : d       Output : D
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert 
//  Input           :   Character
//  Output          :   Convert case of given character
//  Description     :   Convert case of given character
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    /*  
        Character       ASCII values
            A               65
            Z               90
            a               97
            z               122    
        
        Uppercase → lowercase: 'A' + 32 = 65 + 32 = 97 = a

        Lowercase → uppercase: 'a' - 32 = 87 - 32 = 65 = A
    */
    if(CValue >= 'A' && CValue <= 'Z') 
    {
        printf("%c",CValue + 32);
    }
    else{
        printf("%c",CValue - 32);
    }
}

///////////////////////////////////////////////////////
//
//
//  Entry point of the application
//
///////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}