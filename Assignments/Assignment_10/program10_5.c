/*
    5.Write a program which accept area in square feet and 
    convert i meter. (1 square feet = 0.0929 Square meter)

    Input:5
    Output:0.464515
    
    Input:7
    Output:0.650321
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}
int main()

{

    int iValue = 0;

    double dRet = 0.0;

    printf("Enter area in square feet"); 
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Squre meter is %lf\n",dRet);

    return 0;

}