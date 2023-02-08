/*calculate simple interest and compound interest*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float RateOfInterest,time,simpleInterest,compoundInterest;
    int principal;
    printf("THIS PROGRAM CALCULATES SIMPLE INTEREST AND COMPOUND INTEREST \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the principal amount:");
    scanf("%d",&principal);
    printf("enter the rate of interest:");
    scanf("%f",&RateOfInterest);
    printf("enter the time:");
    scanf("%f",&time);
    simpleInterest=principal*RateOfInterest*time/100;
    compoundInterest=(principal*(pow(1+(RateOfInterest/100),time))-principal);
    printf("the simple interest is:%.2f\n",simpleInterest);
    printf("the compound interest is:%.2f\n",compoundInterest);
    getch();
}
