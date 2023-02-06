/*swap two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num;
    printf("THIS PROGRAM SWAPS TWO NUMBERS \n");
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    num=num1;
    num1=num2;
    num2=num;
    printf("after swapping the first number is:%d\n",num1);
    printf("after swapping the second number is:%d\n",num2);
    getch();
}
