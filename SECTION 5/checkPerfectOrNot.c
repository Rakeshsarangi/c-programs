/*this program checks whether a number is perfect or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,temp,result,reminder,sum,i;
    printf("this program checks whether a number is perfect or not \n");
    printf("enter a number:");
    scanf("%d",&number);
    sum=0;
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==number)
    {
          printf("%d is a perfect number",number);
    }
    else
    {
          printf("%d is not a perfect number",number);
    }
    getch();
}
