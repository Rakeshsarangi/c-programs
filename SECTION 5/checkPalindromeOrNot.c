/*this program checks whether a number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,temp,result,reminder,sum,i;
    printf("this program checks whether a number is palindrome or not \n");
    printf("enter a number:");
    scanf("%d",&number);
    sum=0;
    temp=number;
    for(i=1;i>=1;i++)
    {
        if(number==0)
        {
            sum=sum;
        }
        else if(number<10)
        {
            reminder=number;
            sum=(sum*10)+reminder;
            break;
        }
        else
        {
            result=number/10;
            reminder=number%10;
            sum=(sum*10)+reminder;
            number=result;
        }
    }
    if(sum==temp)
    {
          printf("%d is a palindrome number",temp);
    }
    else
    {
          printf("%d is not a palindrome number",temp);
    }
    getch();
}
