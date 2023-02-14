/*this program convert parse matrix given in regular form into 3 tuple form*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void convertSparseMatrix(int matrix[][100],int m,int n)
{
    int sparsematrix[m*n][3];
    int i,j,r=1;
    int count=0;//for counting non zero elements
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=0)
            {
                count++;
            }
        }
    }
    sparsematrix[0][0]=m;
    sparsematrix[0][1]=n;
    sparsematrix[0][2]=count;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=0)
            {
                sparsematrix[r][0]=i;
                sparsematrix[r][1]=j;
                sparsematrix[r][2]=matrix[i][j];
                r++;
            }
        }
    }
    printf("\n the given matrix in 3-tuple form is:\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sparsematrix[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int matrix[100][100],row,column,i,j;
    printf("this program convert parse matrix given in regular form into 3 tuple form\n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("enter the row size:");
    scanf("%d",&row);
    printf("enter the column size:");
    scanf("%d",&column);
    printf("enter the elements of a %dx%d matrix:\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("your sparse matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    convertSparseMatrix(matrix,row,column);
    getch();
}
