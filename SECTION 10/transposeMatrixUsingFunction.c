/*this program takes a MxN matrix from the user and transpose it using function*/
#include<stdio.h>
#include<conio.h>
void transpose(int arr[100][100],int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++)
	{
    	    printf("%d\t",arr[j][i]);
	}
	printf("\n");
    }
}
void main()
{
    int row,column,arr[100][100],i,j;
    printf("this program takes a MxN matrix from the user and transpose it using function\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the row size of the matrix:");
    scanf("%d",&row);
    printf("enter the column size of the matrix:");
    scanf("%d",&column);
    printf("enter a %dx%d matrix:\n",row,column);
    for(i=0;i<row;i++)
    {
	for(j=0;j<column;j++)
	{
	   scanf("%d",&arr[i][j]);
	}
    }
    printf("the given matrix is:\n");
    for(i=0;i<row;i++)
    {
	for(j=0;j<column;j++)
	{
    	    printf("%d\t",arr[i][j]);
	}
	printf("\n");
    }
    printf("the transpose of the matrix is:\n");
    transpose(arr,row,column);
    getch();
}
