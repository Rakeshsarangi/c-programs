/*COMPUTE AREA OF A TRIANGLE BY SIDES*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float side1,side2,side3,semiPerimeter,area;
    printf("THIS PROGRAM CALCULATES AREA OF A TRIANGLE BY IT`S SIDES \n");
    printf("enter the first side distance:");
    scanf("%f",&side1);
    printf("enter the second side distance:");
    scanf("%f",&side2);
    printf("enter the third side distance:");
    scanf("%f",&side3);
    semiPerimeter=(side1+side2+side3)/2;
    area=sqrt(semiPerimeter*(semiPerimeter-side1)*(semiPerimeter-side2)*(semiPerimeter-side3));
    printf("area of the triangle=%f",area);
    getch();
}
