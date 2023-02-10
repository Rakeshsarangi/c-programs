/*this program takes n numbers input(the value f n is specified at runtime) in an array and display their sum and average*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *i,*arr,size,sum;
    float average;
    sum=0;
    printf("this program takes n numbers input(the value f n is specified at runtime) in an array and display their sum and average\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the size of the array:");
    scanf("%d",&size);
    arr=(int *)calloc(size,sizeof(int));
    if(arr==0)
    {
        printf("no space available.");
        exit(1);
    }
    printf("enter %d numbers:\n",size);
    for(i=arr;i<arr+size;i++)
    {
        scanf("%d",i);
        sum=sum+*i;
    }
    average=(float)sum/size;
    printf("sum of all numbers=%d\n",sum);
    printf("average of all numbers=%f",average);
    getch();
}
