/*this program reads two strings and compare them without using strcmp() function.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,count=0;
    char str1[100],str2[100];
    printf("this program reads two strings and compare them without using strcmp() function.\n");
    printf("enter a string having maximum 1000 characters:\n");
    gets(str1);
    printf("enter another string having maximum 1000 characters:\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
            if(str1[i]!=str2[i])
            {
                count++;
                continue;
            }
            else
            {
                continue;
            }
    }
    if(count==0)
    {
        printf("two strings are same.");
    }
    else
    {
        printf("two strings are not same.");
    }
    getch();
}
