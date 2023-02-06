/*THIS PROGRAM TAKES A USER INPUT NUMBER AND PRINTS ODD IF IT IS ODD OR PRINTS EVEN IF IT IS EVEN*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("THIS PPROGRAM PRINTS ODD IF THE INPUT NUMBER IS odd AND PRINTS EVEN IF THE INPUT NUUMBER IS EVEN \n");
    printf("enter a number:");
    scanf("%d",&number);
    if(number%2!=0)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }
    getch();
}
