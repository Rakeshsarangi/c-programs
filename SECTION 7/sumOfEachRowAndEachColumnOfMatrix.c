/*this program calculates sum of each row and each column of a matrix*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int row,column,i,j,sum=0;
    printf("this program calculates sum of each row and each column of a matrix\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the row size of a square matrix:");
    scanf("%d",&row);
    printf("enter the column size of a square matrix:");
    scanf("%d",&column);
    int matrix[row][column];
    printf("enter a %dx%d matrix:\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)

        {
            sum=sum+matrix[i][j];
        }
        printf("sum of row %d =%d\n",i+1,sum);
        sum=0;
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)

        {
            sum=sum+matrix[j][i];
        }
        printf("sum of column %d =%d\n",i+1,sum);
        sum=0;
    }
    getch();
}
