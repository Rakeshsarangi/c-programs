/*CHECK WHETHER A 2D ARRAY IS SYMMETRIC OR NOT*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,count=0;
    printf("CHECK WHETHER A 2D ARRAY IS SYMMETRIC OR NOT\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
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
            if(i!=j)
            {
                if(sqmatrix[i][j]==sqmatrix[j][i])
                {
                    count=count;
                }
                else
                {
                count++;
                }
            }
            else
            {
                continue;
            }
        }
    }
    if(count!=0)
    {
        printf("this matrix is not symmetric.");
    }
    else
    {
        printf("this matrix is symmetric.");
    }
    getch();
}
