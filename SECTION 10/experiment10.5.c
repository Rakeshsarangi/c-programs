/*this program takes a MxN matrix as input and show the largest, second largest,the smallest,second smallest number in it*/
#include<stdio.h>
#include<conio.h>
void sort(int matrix[100][100],int m,int n)
{
    int i,j,k,l,temp,arr[m*n];
    for(i=0;i<m;i++)
    {
	    for(j=0;j<n;j++)
        {
            for(k=l;k<m*n;k++)
            {
                arr[k]=matrix[i][j];
                break;
            }
            l++;
        }
    }
    for(i=0;i<m*n;i++)
    {
        for(j=i+1;j<m*n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("\nthe largest no. in the matrix is %d",arr[0]);
    printf("\nthe second largest no. in the matrix is %d",arr[1]);
    printf("\nthe smallest no. in the matrix is %d",arr[(m*n)-1]);
    printf("\nthe second smallest no. in the matrix is %d",arr[(m*n)-2]);
}
void main()
{
    int row,column,matrix[100][100],i,j;
    printf("this program takes a MxN matrix as input and show the largest, second largest,the smallest,second smallest number in it\n");
    printf("enter the row size of the matrix:");
    scanf("%d",&row);
    printf("enter the column size of the matrix:");
    scanf("%d",&column);
    printf("enter a %dx%d matrix:\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
        scanf("%d",&matrix[i][j]);
        }
    }
    printf("the given matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
    	    printf("%d\t",matrix[i][j]);
        }
	printf("\n");
    }
    sort(matrix,row,column);
    getch();
}
