/*this program prints the fibonacci series upto nth term*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,term1,term2,term3,i;
    printf("this program prints the fibonacci series upto nth term \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the number of terms of the series:");
    scanf("%d",&n);
    term1=0;
    term2=1;
    printf("the fibonacci series upto %d th term: \n",n);
    printf("%d ",term1);
    printf("%d ",term2);
    for(i=3;i<=n;i++)
    {
        term3=term1+term2;
        printf("%d ",term3);
        term1=term2;
        term2=term3;
    }
    getch();
}
