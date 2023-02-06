/*find simple and compound interest by changing float to Decimal and int to integer*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    typedef float Decimal;
    typedef int integer;
    Decimal RateOfInterest,time,simpleInterest,compoundInterest;
    integer principal;
    printf("THIS PROGRAM CALCULATES SIMPLE INTEREST AND COMPOUND INTEREST BY CHANGING float TO Decimal AND int TO integer \n ");
    printf("enter the principal amount:");
    scanf("%d",&principal);
    printf("enter the rate of interest:");
    scanf("%f",&RateOfInterest);
    printf("enter the time:");
    scanf("%f",&time);
    simpleInterest=principal*RateOfInterest*time/100;
    compoundInterest=(principal*(pow(1+(RateOfInterest/100),time))-principal);
    printf("the simple interest is:%f\n",simpleInterest);
    printf("the compound interest is:%f\n",compoundInterest);
    getch();
}
