/*this program reads an integer array and prints it in reverse order using a pointer.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("this program reads an integer array and prints it in reverse order using a pointer.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the number elements of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter values in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
       printf("%d\t",*(&arr[i]));
    }
    getch();
}
