/*this program find the length of the string without using strlen() function*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,length=0;
    char str[100];
    printf("this program find the length of the string without using strlen() function\n");
    printf("enter a string having maximum 1000 characters:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("the sting length=%d",length);
    getch();
}
