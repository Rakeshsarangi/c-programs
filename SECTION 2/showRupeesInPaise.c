/*show rupees in paise*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float rupees;
    int paise;
    printf("THIS PROGRAM SHOWS RUPEES IN PAISE \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the amount in rupees:");
    scanf("%f",&rupees);
    paise=(int)(rupees*100);
    printf("the amount in paise=%d",paise);
    getch();
}
