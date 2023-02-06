/*this program prints a structure*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("this program prints the structure\n");
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=2;j--)
        {
            if(j+i>5)
            {
                printf(" ");
            }
            else
            {
                printf("%d",j);
            }
        }
        for(k=1;k<=4;k++)
        {
            if(k+i>5)
            {
                break;
            }
            printf("%d",k);
        }
        printf("\n");
    }
    getch();
}
