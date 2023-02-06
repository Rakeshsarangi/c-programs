/*this program finds whether  a year is leap year or not using functions*/
#include<stdio.h>
#include<conio.h>
void findLeapYear(int y)
{
    if(y%4==0)
    {
        if(y%100==0 && y%400!=0)
        {
            printf("%d is not a leap year.",y);
        }
        else
        {
            printf("%d is a leap year.",y);
        }
    }
    else
    {
        printf("%d is a not leap year.",y);
    }
}
void main()
{
    int year;
    printf("this program finds whether  a year is leap year or not using functions.\n");
    printf("enter the year:");
    scanf("%d",&year);
    findLeapYear(year);
    getch();
}
