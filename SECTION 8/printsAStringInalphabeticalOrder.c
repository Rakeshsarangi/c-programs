
/*this program reads a string and prints it in alphabetical order.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j,k,length,temp1,temp2,temp;
    temp1=0;
    temp2=0;
    char str[100];
    printf("this program reads a string and prints it in alphabetical order.\n");
    printf("enter a string having maximum 1000 characters:\n");
    gets(str);
    length=strlen(str);
    char str1[length],str2[length],tempstr[length];
    for(i=0;i<length;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            for(j=temp1;j<length;j++)
            {
                str1[j]=str[i];
                break;
            }
            temp1++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            for(k=temp2;k<length;k++)
            {
                str2[k]=str[i];
                break;
            }
            temp2++;
        }
        else
        {
            printf("there is all characters are not alphabet");
            break;
        }
    }
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    strcpy(tempstr,str1);
    strlwr(tempstr);
    for(i=0;i<length;i++)
    {
        for(j=i;j<length;j++)
        {
            if(tempstr[j]<str2[i])
            {
                printf("%c",str2[j]);
                continue;
            }
            else if(tempstr[j]>=str2[i])
            {
                printf("%c",str1[j]);
                continue;
            }
            else
            {
                printf("%c",str1[j]);
                continue;

            }
        }
    }
    //puts(tempstr);
    getch();
}
