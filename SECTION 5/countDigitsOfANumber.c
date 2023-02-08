/*this program count the number of digits of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number,temp,count,result,i;
    printf("this program count the number of digits of a number \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter a number:");
    scanf("%d",&number);
    count=0;
    temp=number;
    for(i=1;i>=1;i++)
    {
        if(number==0)
        {
            count=count;
        }
        else if(number<10)
        {
            count=count+1;
            break;
        }
        else
        {
            result=number/10;
            count=count+1;
            number=result;
        }
    }
    printf("the number of digits of the number %d = %d",temp,count);
    getch();
}
