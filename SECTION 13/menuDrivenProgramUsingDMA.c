/*this program is a menu driven programs that takes two one-dimensional arrays and perform following tasks.
    1.insert an element in the 1st array(if size exceeds the allocated size,use ''realloc()')
    2.sort the 1st array.
    3.sort the 2nd array.
    4.merge the two arrays.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addElement(int arr[],int n)
{
    int i,number;
    printf("\n\narray elements before insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    arr=(int *)realloc(arr,n+1*sizeof(int));
    printf("\n\nenter the element you want to add to the array:");
    scanf("%d",&number);
    *(arr+n)=number;
    printf("\n\narray elements before insertion:");
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",*(arr+i));
    }
}
void sort(int arr[],int n)
{
    int i,j,*temp;
    printf("\n\narray elements before sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(*(arr+1)<*(arr+j))
            {
                *temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=*temp;
            }
        }
    }
    printf("\n\nafter sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
}
void merge(int arr1[],int arr2[],int m,int n)
{
    int arr[m+n],i,j,temp;
    temp=0;
    for(i=0;i<m;i++)
    {
        arr[i]=*(arr1+i);
    }
    for(i=m;i<m+n;i++)
    {
        for(j=temp;j<n;j++)
        {
            arr[i]=*(arr2+j);
            break;
        }
        temp++;
    }
    printf("\n\nafter merge two arrays the resultant array is:");
    for(i=0;i<m+n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void main()
{
    int *array1,*array2,size1,size2,i,choice;
    printf("this program is a menu driven programs that takes two one-dimensional arrays and perform following tasks.\n");
    printf("\t1.insert an element in the 1st array(if size exceeds the allocated size,use ''realloc()')\n");
    printf("\t2.sort the 1st array.\n");
    printf("\t3.sort the 2nd array.\n");
    printf("\t4.merge the two arrays.\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the size of 1st array:");
    scanf("%d",&size1);
    printf("enter the size of 2nd array:");
    scanf("%d",&size2);
    array1=(int *)calloc(size1,sizeof(int));
    array2=(int *)calloc(size2,sizeof(int));
    printf("enter the elements in the 1st array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",array1+i);
    }
    printf("enter the elements in the 2nd array:\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",array2+i);
    }
    printf("enter a number to perform a task among the above options:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            addElement(array1,size1);
            break;
        }
    case 2:
        {
            sort(array1,size1);
            break;
        }
    case 3:
        {
            sort(array2,size2);
            break;
        }
    case 4:
        {
            merge(array1,array2,size1,size2);
            break;
        }
    default:
        {
            printf("out of options.");
        }
    }
    getch();
}
