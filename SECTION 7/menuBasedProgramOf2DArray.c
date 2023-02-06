/*this program is a menu based  program that takes two matrices A and B as input and displays following operations based on user's choice.
    1.A+B
    2.A-B
    3.B-A
    4.AXB*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int row1,column1,row2,column2,i,j,k,option;
    printf("this program is a menu based  program that takes two matrices A and B as input and displays following operations based on user's choice.\n");
    printf("1.A+B\n");
    printf("2.A-B\n");
    printf("3.B-A\n");
    printf("4.AXB\n");
    printf("enter the row size of matrix A\n:");
    scanf("%d",&row1);
    printf("enter the column size of matrix A\n:");
    scanf("%d",&column1);
    printf("enter the row size of matrix B\n:");
    scanf("%d",&row2);
    printf("enter the column size of matrix B\n:");
    scanf("%d",&column2);
    int A[row1][column1],B[row2][column2],C[row1][column2];
    printf("enter the elements in matrix A:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elements in matrix B:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("enter any option to perform a operation:");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        if(row1!=row2 && column1!=column2)
        {
            printf("row size of each matrix and column size of each matrix should be same for addition.");
        }
        else
        {
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                    printf("%d\t",C[i][j]);
                }
                printf("\n");
            }
        }
        break;
    case 2:
        if(row1!=row2 && column1!=column2)
        {
            printf("row size of each matrix and column size of each matrix should be same for substraction.");
        break;
        }
        else
        {
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    C[i][j]=A[i][j]-B[i][j];
                    printf("%d\t",C[i][j]);
                }
                printf("\n");
            }
        }
        break;
    case 3:
        if(row1!=row2 && column1!=column2)
        {
            printf("row size of each matrix and column size of each matrix should be same for substraction.");
            break;
        }
        else
        {
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    C[i][j]=B[i][j]-A[i][j];
                    printf("%d\t",C[i][j]);
                }
                printf("\n");
            }
        }
        break;
    case 4:
        if(column1!=row2)
        {
            printf("column size of first matrix and row size of second matrix should be same for multiplication.");
        }
        else
        {
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column2;j++)
                    {
                        C[i][j]=0;
                        for(k=0;k<row2;k++)
                        {
                            C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
                        }
                    }
            }
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column2;j++)
                {
                    printf("%d\t",C[i][j]);
                }
                printf("\n");
            }
        }
        break;
    default:
        {
            printf("out of options");
        }
    }
    getch();
}
