/*this program takes n inputs and show second largest and second smallest number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp,largest2,smallest2,numbers[100];
    printf("this program takes n inputs and show second largest and second smallest number \n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the number of inputs:");
    scanf("%d",&n);
    printf("\n enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(j<=i)
            {
                continue;
            }
            else if(numbers[j]>numbers[i])
            {
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;

            }
            else
            {
                continue;
            }
        }
        if(i==1)
        {
            largest2=numbers[i];
        }
        if(i==n-2)
        {
            smallest2=numbers[i];
        }
    }
    if(n==1)
    {
        largest2=numbers[0];
        smallest2=numbers[0];
    }
    else if(n==2)
    {
        if(numbers[0]>numbers[1])
        {
            largest2=numbers[1];
            smallest2=numbers[0];
        }
        else
        {
            largest2=numbers[0];
            smallest2=numbers[1];
        }
    }
    else if(n==3)
    {
        largest2=numbers[1];
        smallest2=numbers[1];
    }
    printf("the second largest number is:%d\n",largest2);
    printf("the second smallest number is:%d\n",smallest2);
    getch();
}
