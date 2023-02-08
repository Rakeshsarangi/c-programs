/*this program count the number of occurrences of a specific character in a given line of text*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j,length,count=1;
    char str[100];
    printf("this program count the number of occurrences of a specific character in a given line of text\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter a string having maximum 1000 characters:\n");
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]=='\0')
        {
            continue;
        }
        else
        {
            for(j=i+1;j<length;j++)
            {
                if(str[j]==str[i])
                {
                    str[j]='\0';
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }
        printf("%c is present %d times in the line of text\n",str[i],count);
        count=1;
    }
    getch();
}
