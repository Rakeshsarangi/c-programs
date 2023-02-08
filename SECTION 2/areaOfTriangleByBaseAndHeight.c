/*CLCULATE AREA OF A TRIANGLE GIVEN BASE AND HEIGHT*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float base,height,area;
    printf("THIS PROGRAM CALCULATES AREA OF A TRIANGLE BY IT'S HEIGHT AND BASE \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the base of the triangle:");
    scanf("%f",&base);
    printf("enter the height of the triangle:");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("height of the triangle:%.2f",area);
    getch();
}
