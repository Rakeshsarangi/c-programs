/*calculate perimeter and area of a circle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,perimeter,area;
    printf("THIS PROGRAM CACULATES PERIAMETER AND AREA OF A CIRCLE \n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    perimeter=2*3.141*radius;
    area=3.141*radius*radius;
    printf("perimeter of the circle:%f\n",perimeter);
    printf("area of the circle:%f",area);
    getch();
}
