/*this program takes a character string and a character as a function argument and delete all the occurrences of the character from the string using pointer*/
#include<stdio.h>
#include<conio.h>
void delete(char *str[100],char c)
{
    int i,j;
    for(i=0;i!='\0';i++)
    {
        if(*str[i]==c)
        {
            for(j=i;j!='\0';j--)
            {
                *str[i]=*str[i+1];
            }
            i--;
        }
        else
        {
            continue;
        }
    }
}
void main()
{
    char string[100],letter,*ptr;
    printf("this program takes a character string and a character as a function argument and delete all the occurrences of the character from the string using pointer\n");
    printf("enter the string:");
    gets(string);
    printf("enter the character you want to delete:");
    scanf("%c",&letter);
    char *str = string;
    printf("the string before deletion:");
    puts(string);
    delete(&str,letter);
    printf("the string after deletion:");
    puts(string);
    getch();
}
