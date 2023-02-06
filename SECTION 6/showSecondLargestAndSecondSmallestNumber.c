/*this program takes n inputs and show second largest and second smallest number*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp,largest2,smallest2;
    printf("this program takes n inputs and show second largest and second smallest number \n");
    printf("enter the number of inputs:");
    scanf("%d",&n);
    int numbers[n];
    printf("\n enter %d numbers:",n);
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
    printf("the second largest number is:%d\n",largest2);
    printf("the second smallest number is:%d\n",smallest2);
    getch();
}
