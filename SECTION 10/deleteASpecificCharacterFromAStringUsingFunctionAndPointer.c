/*this program takes a character string and a character as a function argument and delete all the occurrences of the character from the string using pointer*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void delete(char *string,char *ch)
{
    int i,j,length;
    length=strlen(string);
    for(i=0;i<length;i++)
    {
        if(string[i]==*ch)
        {
            for(j=i;j<length;j++)
            {
                string[j]=string[j+1];
            }
            i--;
            length--;
        }
        else
        {
            continue;
        }
    }
}
void main()
{
    char string[100],letter;
    printf("this program takes a character string and a character as a function argument and delete all the occurrences of the character from the string using pointer\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the string:");
    gets(string);
    printf("enter the character you want to delete:");
    scanf("%c",&letter);
    printf("the string before deletion:");
    puts(string);
    delete(string,&letter);
    printf("the string after deletion:");
    puts(string);
    getch();
}
