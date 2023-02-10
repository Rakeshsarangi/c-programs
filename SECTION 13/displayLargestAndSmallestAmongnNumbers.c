/*this program takes n numbers input(the value f n is specified at runtime) in an array and display the largest and smallest among them*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *i,*j,*temp,*arr,size;
    printf("this program takes n numbers input(the value f n is specified at runtime) in an array and display the largest and smallest among them\n");
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
    }
    for(i==arr;i<arr+size;i++)
    {
        for(j==arr+1;j<arr+size;j++)
        {
            if(*j>*i)
            {
                *temp=*i;
                *i=*j;
                *j=*temp;
                break;
            }
        }
    }
    printf("the smallest number =%d\n",*arr);
    printf("the largest number =%d",*arr+(size-1));
    getch();
}
