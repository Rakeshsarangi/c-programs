/*this program calculate sum of diagonal elements of a square matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,sum=0;
    printf("this program calculate sum of diagonal elements of a square matrix\n");
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
            if(i==j)
            {
                sum=sum+sqmatrix[i][j];
            }
            else
            {
                continue;
            }
        }
    }
        for(i=0,j=n-1;i<n,j>=0;i++,j--)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                sum=sum+sqmatrix[i][j];
            }
        }
    printf("sum of diagonal elements=%d",sum);
    getch();
}
