/*this program is a menu driven program that takes two linear arrays A ad B as input and displays the following operation's based on user's choice.
     1.Traverse A
     2.Traverse B
     3.Insert a new element in A(after insertion,the size of A should be increased by 1)
     4.Insert a new element in B(after insertion,the size of B should be increased by 1)
     5.Delete an element from A
     6.Delete an element from B
     7.Search an element from A
     8.Search an element from B
     9.Sort A(in ascending order)
     10.Sort B(in ascending order
     11.Merge A and B to form a new array C.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n,i,j,k,position,number,temp,element,count=0,smallest;
    printf("this program is a menu driven program that takes two linear arrays A ad B as input and displays the following operation's based on user's choice.");
    printf("\n1.Traverse A");
    printf("\n2.Traverse A");
    printf("\n3.Insert a new element in A(after insertion,the size of A should be increased by 1)");
    printf("\n4.Insert a new element in A(after insertion,the size of A should be increased by 1)");
    printf("\n5.Delete an element from A");
    printf("\n6.Delete an element from B");
    printf("\n7.Search an element from A");
    printf("\n8.Search an element from B");
    printf("\n9.Sort A(in ascending order)");
    printf("\n10.Sort B(in ascending order)");
    printf("\n11.Merge A and B to form a new array C.");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\nenter the number of elements in array A:");
    scanf("\n%d",&n1);
    printf("\nenter the number of elements in array B:");
    scanf("%d",&n2);
    int A[n1+1],B[n2+1],C[n1+n2];
    printf("\nenter the elements in array A:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nenter the elements in array B:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("enter number of operation which you want to perform:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        for(i=0;i<n1;i++)
        {
            printf("%d ",A[i]);
        }
        break;
    case 2:
        for(i=0;i<n2;i++)
        {
            printf("%d ",B[i]);
        }
        break;
    case 3:
        printf("enter the position you want to insert a number:");
        scanf("%d",&position);
        printf("enter the number you want to insert:");
        scanf("%d",&number);
        printf("\narray before insertion:");
        for(i=0;i<n1;i++)
        {
            printf("%d ",A[i]);
        }
        temp=n1;
        for(i=n1;i>=position;i--)
        {
            A[temp]=A[temp-1];
            temp--;
        }
        A[position-1]=number;
        printf("\n array after insertion:");
        for(i=0;i<=n1;i++)
        {
            printf("%d ",A[i]);
        }
        break;
    case 4:
        printf("enter the position you want to insert a number:\n");
        scanf("%d",&position);
        printf("enter the number you want to insert:\n");
        scanf("%d",&number);
        printf("\narray before insertion:");
        for(i=0;i<n2;i++)
        {
            printf("%d ",B[i]);
        }
        temp=n2;
        for(i=n2;i>=position;i--)
        {
            B[temp]=B[temp-1];
            temp--;
        }
        B[position-1]=number;
        printf("\n array after insertion:");
        for(i=0;i<=n2;i++)
        {
            printf("%d ",B[i]);
        }
        break;
    case 5:
        printf("enter the number you want to delete from array A:");
        scanf("%d",&element);
        for(i=0;i<n1;i++)
        {
            if(A[i]==element)
            {
                printf("\narray before deletion:");
                for(i=0;i<n1;i++)
                {
                    printf("%d ",A[i]);
                }
                for(i=0;i<n1;i++)
                {
                    for(j=0;j<n1;j++)
                    {
                        if(A[j]==element)
                        {
                            for(k=j;k<n1;k++)
                            {
                                A[k]=A[k+1];
                            }
                            count++;
                            break;
                        }
                    }
                }
                printf("\narray after deletion:");
                for(i=0;i<n1-count;i++)
                {
                    printf("%d ",A[i]);
                }
            }
            else
            {
                continue;
            }
        }
        break;
    case 6:
        printf("enter the number you want to delete from array B:");
        scanf("%d",&element);
        for(i=0;i<n2;i++)
        {
            if(B[i]==element)
            {
                printf("\narray before deletion:");
                for(i=0;i<n2;i++)
                {
                    printf("%d ",B[i]);
                }
                for(i=0;i<n2;i++)
                {
                    for(j=0;j<n2;j++)
                    {
                        if(B[j]==element)
                        {
                            for(k=j;k<n2;k++)
                            {
                                B[k]=B[k+1];
                            }
                            count++;
                            break;
                        }
                    }
                }
                printf("\narray before deletion:");
                for(i=0;i<n2-count;i++)
                {
                    printf("%d ",B[i]);
                }
            }
            else
            {
                continue;
            }
        }
        break;
    case 7:
        printf("enter the number you want to search:");
        scanf("%d",&element);
        for(i=0;i<n1;i++)
        {
            if(A[i]==element)
            {
                printf("%d is present in the array A",element);
                break;
            }
            else
            {
                continue;
            }
        }
        break;
    case 8:
        printf("enter the number you want to search:");
        scanf("%d",&element);
        for(i=0;i<n2;i++)
        {
            if(B[i]==element)
            {
                printf("%d is present in the array B",element);
                break;
            }
            else
            {
                printf("%d is not present in the array B",element);
            }
        }
        break;
    case 9:
        for(i=0;i<n1;i++)
        {
            smallest=A[i];
            for(j=i+1;j<n1;j++)
            {
                if(smallest>A[j])
                {
                    temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
                }
                else
                {
                    continue;
                }
            }
            printf("%d",A[i]);
        }
        break;
    case 10:
        for(i=0;i<n2;i++)
        {
            smallest=B[i];
            for(j=i+1;j<n2;j++)
            {
                if(smallest>B[j])
                {
                    temp=B[i];
                    B[i]=B[j];
                    B[j]=temp;
                }
                else
                {
                    continue;
                }
            }
            printf("%d",B[i]);
        }
        break;
    case 11:
        for(i=0;i<n1;i++)
        {
            C[i]=A[i];
        }
        for(i=n1+n2-1;i>=n1;i--)
        {
            for(j=n2-1;j>=0;j--)
            {
                C[i]=B[j];
                i--;
            }
        }
        for(i=0;i<n1+n2;i++)
        {
            printf("%d ",C[i]);
        }
        break;
    default:
        printf("out of options");
    }
    getch();
}
