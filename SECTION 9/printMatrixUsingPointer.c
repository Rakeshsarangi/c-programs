/*this program input a 4x5 matrix and displays it using pointer.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[4][5],i,j;
    printf("this program input a 4x5 matrix and displays it using pointer.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter values of a 4x5 matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the values in the matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",*(&arr[i][j]));
        }
        printf("\n");
    }
    getch();
}
