/*this program finds the frequency  of occurrence of each  number in an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,count,temp,arr[100];
    printf("this program finds the frequency  of occurrence of each  number in an array\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the  number of elements in array:");
    scanf("%d",&n);
    printf("enter the numbers in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    count=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]=='-')//for not check the numbers that are already checked
            {
                continue;
            }
            else if(arr[j]==arr[i])
            {
                count++;
                temp=j;//for the value of j not  become -
                arr[temp]=-1;//for print one digit one time
            }
            else
            {
                continue;
            }
        }
        if(arr[i]==-1)//for print one digit one time
        {
            continue;
        }
        else
        {
        printf("%d is present %d times in the array\n",arr[i],count);
        count=1;
        }
    }
    getch();
}
