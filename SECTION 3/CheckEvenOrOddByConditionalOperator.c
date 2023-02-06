/*check even or odd by conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("THIS PROGRAM SHOWS WHETHER A NUMBER IS EVEN OR ODD BY CONDITIONAL OPERATOR \n");
    printf("enter a number:");
    scanf("%d",&num);
    num%2==0?printf("it is a even number"):printf("it is a odd number");
}
