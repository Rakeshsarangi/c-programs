/*find sum of digits of a four digit number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum,result,reminder,i;
    sum=0;
    printf("THIS PROGRAM SHOWS SUM OF DIGITS OF A FOUR DIGIT NUMBER \n");
    printf("enter a four digit number:");
    scanf("%d",&num);
    reminder=num%10;
    sum=sum+reminder;
    result=num/10;
    num=result;
    reminder=num%10;
    sum=sum+reminder;
    result=num/10;
    num=result;
    reminder=num%10;
    sum=sum+reminder;
    result=num/10;
    num=result;
    reminder=num%10;
    sum=sum+reminder;
    result=num/10;
    num=result;
    printf("the sum of digits:%d",sum);
    getch();
}
