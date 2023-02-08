/*IT TAKES THREE NUMBERS AS INPUT AND FIND SMALLEST*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("THIS PROGRAM SHOWS SMALLEST NUMBER AMONG THREE USER INPUT NUMBERS \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    printf("enter the third number:");
    scanf("%d",&num3);
    if(num1<num2 && num1<num3)
    {
        printf("the smallest number is :%d",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("the smallest number is :%d",num2);
    }
    else
    {
        printf("the smallest number is :%d",num3);
    }
    getch();
}
