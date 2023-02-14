/*this program prints thew transpose of the sparse matrix given in 3-tuple form*/
#include<stdio.h>
#include<conio.h>
void printTranspose(int matrix[][3],int m)
{
    int row,column,i,j;
    row=matrix[0][0];
    column=matrix[0][1];
    int sparsematrix[row][column];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sparsematrix[i][j]=0;
        }
    }
    for(i=1;i<m;i++)
    {
        sparsematrix[matrix[i][0]][matrix[i][1]]=matrix[i][2];
    }
    printf("the sparse matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",sparsematrix[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the sparse matrix is:\n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",sparsematrix[j][i]);
        }
        printf("\n");
    }
}
void main()
{
    int tuplematrix[100][3],row,i,j;
    printf("this program prints thew transpose of the sparse matrix given in 3-tuple form.\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("enter the row size of the 3-tuple form:");
    scanf("%d",&row);
    printf("enter the lements in tiple matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&tuplematrix[i][j]);
        }
    }
    printf("the 3-tuple form is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",tuplematrix[i][j]);
        }
        printf("\n");
    }
    printTranspose(tuplematrix,row);
    getch();
}
