/*this program compares two arrays and if they are identical returns 1 otherwise returns 0 using pointer and functions*/
#include<stdio.h>
#include<conio.h>
int compare(int (*arr1)[],int (*arr2)[],int *m,int *n)
{
    int i,count=1;
    if(*m==*n)
    {
        for(i=0;i<*m;i++)
        {
            if((*arr1)[i]==(*arr2)[i])
            {
                continue;
            }
            else
            {
                count--;
                break;
            }
        }
    }
    else
    {
        count--;
    }
    return count;
}
void main()
{
    int arr1[100],arr2[100],size1,size2,result,i;
    printf("this program compares two arrays and if they are identical returns 1 otherwise returns 0 using pointer and functions./n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the size of first array:");
    scanf("%d",&size1);
    printf("enter the size of second array:");
    scanf("%d",&size2);
    printf("enter the elements in first array:\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements in second array:\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    result=compare(&arr1,&arr2,&size1,&size2);
    printf("the result is:%d",result);
    getch();
}
