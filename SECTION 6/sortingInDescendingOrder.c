/*this program takes n inputs and arrange them in descending orders*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp;
    printf("this program takes n inputs and arrange them in descending orders \n");
    printf("enter the number of inputs:");
    scanf("%d",&n);
    int numbers[n];
    printf("\n enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("the numbers are in descending order is:\n");
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
        printf("%d ",numbers[i]);
    }
    getch();
}
