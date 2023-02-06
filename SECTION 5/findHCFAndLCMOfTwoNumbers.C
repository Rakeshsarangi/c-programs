/*this program find HCF and LCM of two numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,HCF,LCM,smaller,i;
    printf("this program find HCF and LCM of two numbers \n");
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    smaller=num1;
    if(num1>num2)
        {
            smaller=num2;
        }
    if(num1%num2==0)
        {
            HCF=num2;
            LCM=num1;
        }
    else if(num2%num1==0)
        {
            HCF=num1;
            LCM=num2;
        }
    else
        {
            for(i=1;i<=smaller;i++)
            {
                if(num1%i==0 && num2%i==0)
                {
                    HCF=i;
                    LCM=(num1*num2)/i;
                }
            }
        }
    printf("HCF of the numbers=%d and LCM of numbers=%d",HCF,LCM);
    getch();
}
