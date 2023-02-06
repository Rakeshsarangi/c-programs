/*this program prints a star structure*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("this program prints the star pattern.\n");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            for(k=1;k<=4-i;k++)
            {
                if(j>=2)
                {
                    break;
                }
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    getch();
}
