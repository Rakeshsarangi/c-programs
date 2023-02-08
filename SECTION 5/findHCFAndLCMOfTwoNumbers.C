/*this program find HCF and LCM of two numbers*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,HCF,LCM,smaller,greater,i;
    printf("this program find HCF and LCM of two numbers \n");
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    smaller=num1;
    greater=num2;
    if(num1>num2)
        {
            smaller=num2;
            greater=num1;
        }
    for(i=smaller;i<=smaller;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            HCF=i;
            break;
        }
        else
        {
            continue;
        }
    }
    for(i=greater;i>=greater;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            LCM=i;
            break;
        }
        else
        {
            continue;
        }
    }
    printf("HCF of the numbers=%d and LCM of numbers=%d",HCF,LCM);
    return 0;
}
