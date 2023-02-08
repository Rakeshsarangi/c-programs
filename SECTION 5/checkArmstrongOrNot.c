/*check whether a number is armstrong or not*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int number,temp,result,reminder,sum,i;
    printf("this program checks whether a number is armstrong or not \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
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
            sum=sum+(pow(reminder,3));
            break;
        }
        else
        {
            result=number/10;
            reminder=number%10;
            sum=sum+(pow(reminder,3));
            number=result;
        }
    }
    if(sum==temp)
    {
          printf("%d is a armstrong number",temp);
    }
    else
    {
          printf("%d is not a armstrong number",temp);
    }
    getch();
}

