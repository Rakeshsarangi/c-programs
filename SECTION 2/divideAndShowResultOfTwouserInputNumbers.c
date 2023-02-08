/*take two numbers from user divides 1st number by second and show the result along with the numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2;
    float result;
    printf("THIS PROGRAM TAKES TWO NUMBERS FROM USER.DIVIDES FIRST NUMBER BY SECOND NUMBER AND SHOW THE RESULT ALONG WITH THE NUMBERS \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    result=(float)num1/num2;
    printf("you entered %d and %d.the result after division=%f\n",num1,num2,result);
    getch();
}
