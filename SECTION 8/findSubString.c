/*this program takes as input a string and two numbers n1 and n2 find the substring between these two positions*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n1,n2,count=1;
    char str[100];
    printf("this program takes as input a string and two numbers n1 and n2 find the substring between these two positions\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter a string having maximum 1000 characters:\n");
    gets(str);
    printf("enter the position from which you want to find the substring:\n");
    scanf("%d",&n1);
    printf("enter the position upto which you want to find the substring:\n");
    scanf("%d",&n2);
    printf("the substring is:");
    for(i=n1;i<=n2;i++)
    {
        printf("%c",str[i]);
    }
    getch();
}
