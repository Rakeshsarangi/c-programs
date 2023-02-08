/*this program add two matrices and show the resultant matrix in the main function using another function and pointer*/
#include<stdio.h>
#include<conio.h>
void addMatrix(int (*matrix1)[100][100],int (*matrix2)[100][100],int (*matrix)[100][100],int *m,int *n)
{
    int i,j;
    for(i=0;i<*m;i++)
    {
        for(j=0;j<*n;j++)
        {
            (*matrix)[i][j]=(*matrix1)[i][j]+(*matrix2)[i][j];
        }
    }
}
void main()
{
    int matrix1[100][100],matrix2[100][100],matrix[100][100],row,column,i,j;
    printf("this program add two matrices and show the resultant matrix in the main function using another function and pointer.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the row size of the matrices:");
    scanf("%d",&row);
    printf("enter the column size of the matrices:");
    scanf("%d",&column);
    printf("enter elements in the first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter elements in the second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("first matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    addMatrix(&matrix1,&matrix2,&matrix,&row,&column);
    printf("the resultant matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    getch();
}
