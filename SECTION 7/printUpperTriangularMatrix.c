/*this program prints upper triangular matrix a square matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("this program prints upper triangular matrix a square matrix\n");
    printf("enter the row or column size of a square matrix:");
    scanf("%d",&n);
    int sqmatrix[n][n];
    printf("enter a %dx%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&sqmatrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                printf(" \t");
            }
            else
            {
                printf("%d\t",sqmatrix[i][j]);
            }
        }
        printf("\n");
    }
    getch();
}
