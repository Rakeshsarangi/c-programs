/*THIS PROGRAM DELETE DUPLICATE CHARACTERS FROM AN ARRAY*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    char arr[100];
    printf("THIS PROGRAM DELETE DUPLICATE CHARACTERS FROM AN ARRAY\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the  number of elements in array:");
    scanf("%d",&n);
    printf("enter the character in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    printf("array before deletion:");
    for(i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }
    printf("\narray after deletion:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && arr[j]!=0)//for not repeating the check of the previous elements and same element
            {
                printf("%c ",arr[j]);
                continue;
            }
            else if(arr[i]==arr[j])
            {
                arr[j]='\0';
            }
            else
            {
                continue;
            }
            if(arr[j]!='\0')//for not printing null characters
            {
                printf("%c ",arr[j]);
            }
        }
    }
    getch();
}
