/*this program add two complex numbers using a structure named as COMPLEX.*/
#include<stdio.h>
#include<conio.h>
typedef struct
{
    float real,imaginary;
}COMPLEX;
void main()
{
    COMPLEX number1,number2,sum;
    printf("this program add two complex numbers using a structure named as COMPLEX.\n");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("enter the real part of the 1st complex number:");
    scanf("%f",&number1.real);
    printf("enter the imaginary part of the 1st complex number:");
    scanf("%f",&number1.imaginary);
    printf("enter the real part of the 2nd complex number:");
    scanf("%f",&number2.real);
    printf("enter the imaginary part of the 2nd complex number:");
    scanf("%f",&number2.imaginary);
    sum.real=number1.real+number2.real;
    sum.imaginary=number1.imaginary+number2.imaginary;
    printf("sum of the complex numbers=%.2f+%.2fi",sum.real,sum.imaginary);
    getch();
}
