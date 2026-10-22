/*
    3. Calculate Shopping Discount

    Problem statement:
    Accept the total purchase amount and calculate the
    final payable amount after applying the following 
    discount. Negative purchase amounts are invalid.

    -------------------------------------------------
        Purchase Amount                 Discount
    -------------------------------------------------
        Below Rs. 1000                  0%
    -------------------------------------------------
        Rs.1000 to below Rs.5000        10% 
    -------------------------------------------------
        Rs.5000 and above               20%
    -------------------------------------------------

    Expected Output:
    1. Input: 800  -> Payable Amount = 800.00
    2. Input: 2000 -> Payable Amount = 1800.00
    3. Input: 6000 -> Payable Amount = 4800.00
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateDiscount 
//  Input           :   Float
//  Output          :   calculate the final payable
//                      amount after applying discount
//  Description     :   Calculate Shopping Discount
//  Date            :   22/10/2026
//  Author          :   Ashvini Dharmaraj Chaudhari
//
///////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    //Input filter
    if(fFinalAmount < 0)
    {
        printf("Invalid Input");
        return;
    }

    if(fAmount < 1000)
    {
        fDiscount = 0;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n",fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount*0.10;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n",fFinalAmount);
    }
    else
    {
        fDiscount = fAmount*0.20;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n",fFinalAmount);
    }
}
///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}