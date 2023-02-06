/*this program take a string as input and convert all lower case characters to upper case equivalent using function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void UpperCase(char str[100])
{
    strupr(str);
}
void main()
{
    char string[100];
    int n,i;
    printf("this program take a string as input and convert all lower case characters to upper case equivalent using function.\n");
    printf("enter the length of the string:");
    scanf("%d",&n);
    printf("enter the string:");
    for(i=0;i<=n;i++)
    {
        scanf("%s",&string[i]);
    }
    printf("\nstring before conversion:");
    for(i=0;i<n;i++)
    {
        printf("%c",string[i]);
    }
    UpperCase(string);
    printf("\nstring after conversion:");
    for(i=0;i<n;i++)
    {
        printf("%c",string[i]);
    }
    getch();
}
