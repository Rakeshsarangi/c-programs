/*this program inserts an element at a given position of an array then the array size increased by one*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,position,number,temp,arr[100];
    printf("this program inserts an element at a given position of an array then the array size increased by one\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the  number of elements in array:");
    scanf("%d",&n);
    printf("enter the numbers in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position you want to insert a number:\n");
    scanf("%d",&position);
    printf("enter the number you want to insert:\n");
    scanf("%d",&number);
    printf("\narray before insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    temp=n;
    for(i=n;i>=position;i--)
    {
        arr[i]=arr[i-1];
        temp--;
    }
    arr[position-1]=number;
    printf("\n array after insertion:");
    for(i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}
